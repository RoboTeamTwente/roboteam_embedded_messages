import math
from packets import packets
from datetime import datetime


############################## UTILITY FUNCTIONS ##############################

# Capitalizes the first letter of a word
def upperFirst(word):
	return word[0].capitalize() + word[1:]
# RobotCommand => rc
def CamelCaseToAbbrev(word):
	return ''.join([letter for letter in word if letter.isupper()]).lower()
# REM_RobotCommand => REM_ROBOT_COMMAND
def CamelCaseToUpper(word):

	# Find all indices where a lowercase letter is followed by an uppercase letter
	indices = [ i for i in range(1, len(word)) if word[i-1].islower() and word[i].isupper() ]
	# Insert a _ at all of those indices
	for i in reversed(indices):	word = word[:i] + "_" +  word[i:]
	# Uppercase word
	word = word.upper()

	return word

def stripBrackets(string):
	while string[0] == "(" and string[-1] == ")":
		string = string[1:-1]
	return string

### Returns a string of 0bxxxxxxxx where x=1 if x in range [start, stop), else 0. If reverse=True, swap 0 and 1
# bitString(1, 2, reverse=False) = 0b01000000	
# bitString(5, 6, reverse=True ) = 0b11111011
def bitString(start, stop, reverse = False):
	set1 = list(range(start, stop))
	bitstring = "0b" + ''.join(["%d" % ((i in set1) ^ reverse) for i in range(8)])
	return bitstring

# Return either <<, >>, or nothing, depending on left vs right	
def shift(left, right):
	if left == right: return ""
	if left < right: return " >> %d" % (right-left)
	if right < left: return " << %d" % (left-right)

# Change number of bits to required integer size
def getType(n_bits, _range):
	_type = "bool"
	if  1 < n_bits: _type = "uint32_t"
	if 32 < n_bits: _type = "uint64_t"
	return _type

# Returns a and b in the formula y = ax+b
def getConversion(nBits, _range):
		vMin, vMax = _range
		vTotal = vMax - vMin
		return vTotal / (2**nBits - 1), vMin




class Generator:

	payload_abbrev = None

	def generate(self, packet_name, variables):
		timestamp = datetime.now()
		timestamp_string = timestamp.strftime("%B %d %Y, %H:%M:%S")
		c = self.comment()
		
		file_string = ""
		file_string += f"{c} AUTOGENERATED. Run generator/main.py to regenerate\n"
		# file_string += f"{c} Generated on {timestamp_string}\n\n"


		file_string += self.to_packet_description(packet_name, variables)
		file_string += "\n"
		
		file_string += self.to_begin(packet_name)
		file_string += "\n"
		
		file_string += self.to_payload_instance(packet_name, variables)
		file_string += "\n\n"
		
		file_string += self.to_instance(packet_name, variables)
		file_string += "\n\n"

		file_string += f"{c} ================================ GETTERS ================================\n"
		file_string += self.generate_getters(packet_name, variables)

		file_string += f"{c} ================================ SETTERS ================================\n"
		file_string += self.generate_setters(packet_name, variables)

		file_string += f"{c} ================================ ENCODE ================================\n"
		file_string += self.to_encode(packet_name, variables)
		file_string += "\n\n"

		file_string += f"{c} ================================ DECODE ================================\n"
		file_string += self.to_decode(packet_name, variables)
		file_string += "\n\n"

		file_string += self.to_end(packet_name)

		return file_string

	def generate_getters(self, packet_name, variables):
		current_bit = 0
		getters_string = ""
		for variable in variables:
			getters_string += self.to_function_call_get(packet_name, variable)
			getters_string += self.to_getter(packet_name, variable, current_bit)
			getters_string += self.end_function()
			getters_string += "\n"
			_, n_bits, _, _ = variable
			current_bit += n_bits
		return getters_string

	def generate_setters(self, packet_name, variables):
		current_bit = 0
		setters_string = ""
		for variable in variables:
			setters_string += self.to_function_call_set(packet_name, variable)
			setters_string += self.to_setter(packet_name, variable, current_bit)
			setters_string += self.end_function()
			setters_string += "\n"
			_, n_bits, _, _ = variable
			current_bit += n_bits
		return setters_string




	def convert_type(self, variable_type):
		return None
	def cast_to_type(self, string, variable_type):
		raise NotImplementedError

	def begin_block_comment(self):
		raise NotImplementedError()
	def end_block_comment(self):
		raise NotImplementedError()
	def comment(self):
		raise NotImplementedError()

	def get_payload_name(self, packet_name):
		raise NotImplementedError()
	def get_payload_variable(self, packet_name):
		raise NotImplementedError()
	def get_indent(self):
		return ""
	def to_float(self):
		return ""

	def to_begin(self, packet_name):
		return ""
	def to_end(self, packet_name):
		return ""

	def to_packet_description(self, packet_name, variables):
		# Calculate number of bytes needed to store all variables. ceil(total number of bits / 8)
		n_bytes = math.ceil(sum([n_bits for (_, n_bits, _, _) in variables]) / 8)
		# Create [---0--] [---1--] [---2--] .......
		# str(i).rjust(4,"-")
		string_description = self.begin_block_comment() + "\n"
		string_description += ' '.join([ f"[{i : ^6}]" for i in range(n_bytes) ])
		# Keep track of location in the packet
		current_bit = 0
		for variable, n_bits, _, desc in variables:
			string_description += "\n"	
			active_bits = list(range(current_bit, current_bit + n_bits)) # Indices of active bits
			for i in range(n_bytes * 8): # For all bits
				if i != 0 and i % 8 == 0: string_description += " " # Add whitespace
				string_description += "1" if i in active_bits else "-" # Add '1' if bit active, '-' if inactive
			string_description += f" {variable}"
			current_bit += n_bits
		string_description += "\n" + self.end_block_comment() + "\n"
		return string_description

	def to_payload_instance(self, packet_name, variables):
		return ""

	def to_instance(self, packet_name, variables):
		raise NotImplementedError()

	def to_function_call_get():
		raise NotImplementedError()

	def end_function(self):
		return ""


	def to_encode(self, packet_name, variables):
		raise NotImplementedError()

	def to_decode(self, packet_name, variables):
		raise NotImplementedError()


	def to_getter(self, packet_name, variable, current_bit):
		variable_name, n_bits, _range, desc = variable
		at_byte, at_bit = current_bit // 8, current_bit % 8
		_type = getType(n_bits, _range) 
		float_conversion = _range is not None

		payload_variable = self.get_payload_variable(packet_name)

		if _type == "bool":
			return f"{self.get_indent()}    return ({payload_variable}[{at_byte}] & {bitString(at_bit, at_bit+1)}) > 0;\n"

		if _type in ["uint32_t", "uint64_t"]:
			n_bits_remaining = n_bits
			bitwise_operations = []
			
			while 0 < n_bits_remaining:
				# Find the byte index in the packet, and the bit index within that byte
				at_byte, at_bit = current_bit // 8, current_bit % 8
				# Calculate the number of bits to process from the current byte. Always 8 or less
				# Either the remaining bits in the variable, or the remaining bits in the byte, whichever one is smaller
				bits_from_byte = min(n_bits_remaining, 8 - at_bit)
				# Figure out which bits we need from the byte
				start_bit, stop_bit = at_bit, at_bit + bits_from_byte
				# Generate bitshift mask, except if the entire byte is used, e.g. " & 0b00111000"
				bitshift_mask = "" if bits_from_byte == 8 else f" & {bitString(start_bit, stop_bit)}"
				# Figure out how much we need to shift this baby in total
				shift_to_right = (8 - stop_bit)
				shift_to_left = n_bits_remaining - bits_from_byte

				bitwise_operation = f"(({payload_variable}[{at_byte}]{bitshift_mask}){shift(shift_to_left, shift_to_right)})"
				bitwise_operations.append(bitwise_operation)

				n_bits_remaining -= bits_from_byte
				current_bit += bits_from_byte

			# Concatenate all bit operations
			bitwise_operations_string = ' | '.join(bitwise_operations)

			# No range given, so no conversion to float needed
			if not float_conversion:
				return f"{self.get_indent()}    return {bitwise_operations_string};\n"
			# Range given. Do integer => float conversion
			else: 
				a, b = getConversion(n_bits, _range) # y = ax + b
				variable_type = "" if self.convert_type(_type) is None else f"{self.convert_type(_type)} "
				conversion_string  = f"{self.get_indent()}    {variable_type}_{variable_name} = {bitwise_operations_string};\n"
				conversion_string += f"{self.get_indent()}    return (_{variable_name} * {a:.16f}{self.to_float()})"
				if b != 0: conversion_string += f" + {b:.16f}{self.to_float()}"
				conversion_string += ";\n"
				return conversion_string


	def to_setter(self, packet_name, variable, current_bit):
		variable_name, n_bits, _range, desc = variable
		at_byte, at_bit = current_bit // 8, current_bit % 8
		_type = getType(n_bits, _range) 
		float_conversion = _range is not None

		payload_variable = self.get_payload_variable(packet_name)

		# Create the conversion from float to integer, if needed
		conversion_string = ""
		if float_conversion:
			# Formula : y = ax + b => x = (y - b) / a
			a, b = getConversion(n_bits, _range)
			variable_type = "" if self.convert_type(_type) is None else f"{self.convert_type(_type)} "
			subtract_string = f"{variable_name}" if b == 0 else f"({variable_name} {-b:+.16f}{self.to_float()})"
			division_string = f" / {int(a)}" if int(a) == float(a) else f" / {a:.16f}{self.to_float()}"
			calculation_string = self.cast_to_type(f"{subtract_string}{division_string}", _type)
			conversion_string += f"{self.get_indent()}    {variable_type}_{variable_name} = {calculation_string};\n"
			variable_name = f"_{variable_name}"

		# Create all bitwise operations
		n_bits_remaining = n_bits
		bitwise_operations = []
		
		while 0 < n_bits_remaining:
			# Find the byte index in the packet, and the bit index within that byte
			at_byte, at_bit = current_bit // 8, current_bit % 8
			# Calculate the number of bits to process from the current byte. Always 8 or less
			# Either the remaining bits in the variable, or the remaining bits in the byte, whichever one is smaller
			bits_from_byte = min(n_bits_remaining, 8 - at_bit)
			# Figure out which bits we need from the byte
			start_bit, stop_bit = at_bit, at_bit + bits_from_byte

			# Generate bitshift mask, except if the entire byte is used, e.g. " & 0b00111000"
			bitshift_mask = "" if bits_from_byte == 8 else f" & {bitString(start_bit, stop_bit)}"
			# Generate inverse bitmask
			bitmask_inverted = f" & {bitString(start_bit, stop_bit, True)}"

			# Figure out how much we need to shift this baby in total
			shift_to_left = 8 - stop_bit
			shift_to_right = max(0, n_bits_remaining - bits_from_byte)

			# Create the mask that prevents unrelated bits from being set
			string_inverse = ""
			if bits_from_byte < 8:
				string_inverse = f" | ({payload_variable}[{at_byte}]{bitmask_inverted})"

			# Add shifting of variable if needed
			string_shift = variable_name
			if shift_to_left != 0 or shift_to_right != 0:
				string_shift = f"({variable_name}{shift(shift_to_left, shift_to_right)})"
				
			# Add masking to variable if needed
			string_bitmask = string_shift
			if bits_from_byte != 8:
				string_bitmask = f"({string_shift}{bitshift_mask})"

			operation_string = f"{self.get_indent()}    {payload_variable}[{at_byte}] = {string_bitmask}{string_inverse};"
			bitwise_operations.append(operation_string)

			n_bits_remaining -= bits_from_byte
			current_bit += bits_from_byte

		operations_string = conversion_string
		operations_string += '\n'.join(bitwise_operations) + "\n"
		return operations_string



class C_Generator(Generator):

	def convert_type(self, variable_type):
		return variable_type

	def cast_to_type(self, string, variable_type):
		return f"({variable_type})({string})"

	def begin_block_comment(self):
		return "/*"
	def end_block_comment(self):
		return "*/"
	def comment(self):
		return "//"

	def get_payload_name(self, packet_name):
		return f"{CamelCaseToAbbrev(packet_name)}p"
	def get_payload_variable(self, packet_name):
		return f"{self.get_payload_name(packet_name)}->payload"
	def to_float(self):
		return "F"

	def to_begin(self, packet_name):
		begin_string = ""
		begin_string += f"#ifndef {self.to_header_guard(packet_name)}\n"
		begin_string += f"#define {self.to_header_guard(packet_name)}\n"
		begin_string += "\n"
		begin_string += f"#include <stdbool.h>\n"
		begin_string += f"#include <stdint.h>\n"
		begin_string += f"#include \"REM_BaseTypes.h\"\n"
		return begin_string

	def to_end(self, packet_name):
		return f"#endif /*{self.to_header_guard(packet_name)}*/\n"

	# typedef struct _RobotCommandPayload {
	#     uint8_t payload[REM_PACKET_SIZE_ROBOT_COMMAND];
	# } RobotCommandPayload;
	def to_payload_instance(self, packet_name, variables):
		string_struct  = f"typedef struct _{packet_name}Payload {{\n"
		string_struct += f"    uint8_t payload[REM_PACKET_SIZE_{CamelCaseToUpper(packet_name)}];\n"
		string_struct += f"}} {packet_name}Payload;"
		return string_struct

	# typedef struct _RobotCommand {
	#    uint8_t    header;                  // Header byte indicating the type of packet
	#    uint8_t    id;                      // Id of the robot
	#    uint8_t    messageId;               // Id of the message
	#    ....
	def to_instance(self, packet_name, variables):
		string_struct = f"typedef struct _{packet_name} {{\n"
		
		for variable, n_bits, _range, desc in variables:
			# Get type (bool, uint32_t, uint64_t, float)
			if _range is not None: _type = "float"
			else: _type = getType(n_bits, _range)

			if _type == "float": range_string = f"float   [{_range[0]:.3f}, {_range[1]:.3f}]".ljust(28)
			else:                range_string = f"integer [0, {2**n_bits-1}]".ljust(28)

			string_struct += f"    {_type.ljust(10)}"		# Add type
			string_struct += f" {variable.ljust(20)};"		# Add variable name
			string_struct += f" // {range_string} {desc}\n" # Add description
		
		string_struct += f"}} {packet_name};"
		return string_struct

	def to_function_call_get(self, packet_name, variable):
		variable_name, n_bits, _range, desc = variable
		_type = "float" if _range is not None else getType(n_bits, _range) 
		return f"static inline {_type} {packet_name}_get_{variable_name}({packet_name}Payload *{self.get_payload_name(packet_name)}){{\n"
	def to_function_call_set(self, packet_name, variable):
		variable_name, n_bits, _range, desc = variable
		_type = "float" if _range is not None else getType(n_bits, _range) 
		return f"static inline void {packet_name}_set_{variable_name}({packet_name}Payload *{CamelCaseToAbbrev(packet_name)}p, {_type} {variable_name}){{\n"

	def end_function(self):
		return "}\n"


	def to_decode(self, packet_name, variables):
		packet_abbrev = CamelCaseToAbbrev(packet_name)
		function_string = f"static inline void decode{packet_name}({packet_name} *{packet_abbrev}, {packet_name}Payload *{packet_abbrev}p){{\n"
		for variable_name, n_bits, _, _ in variables:
			function_string += f"    {packet_abbrev}->{variable_name}".ljust(25) + f"= {packet_name}_get_{variable_name}({packet_abbrev}p);\n"
		function_string += "}"		
		return function_string

	def to_encode(self, packet_name, variables):
		packet_abbrev = CamelCaseToAbbrev(packet_name)
		function_string = f"static inline void encode{packet_name}({packet_name}Payload *{packet_abbrev}p, {packet_name} *{packet_abbrev}){{\n"
		for variable_name, n_bits, _, _ in variables:
			function_string += f"    {packet_name}_set_{variable_name:<20}({packet_abbrev}p, {packet_abbrev}->{variable_name});\n"
		function_string += "}"
		return function_string

	# RobotCommand => __ROBOT_COMMAND_H
	def to_header_guard(self, packet_name):
		return f"__{CamelCaseToUpper(packet_name)}_H"

class Python_Generator(Generator):

	def cast_to_type(self, string, variable_type):
		if variable_type in ["uint32_t", "uint64_t"]:
			return f"int({string})"
		return string

	def begin_block_comment(self):
		return '"""'
	def end_block_comment(self):
		return '"""'
	def comment(self):
		return "#"

	def get_payload_name(self, packet_name):
		return "payload"
	def get_payload_variable(self, packet_name):
		return self.get_payload_name(packet_name)
	def get_indent(self):
		return "    "
	
	def to_begin(self, packet_name):
		begin_string  = "import numpy as np\n"
		begin_string += "from . import REM_BaseTypes\n"
		return begin_string 

	def to_end(self, packet_name):
		end_string  = f"    def print_bit_string(self):\n"
		end_string += f"        payload = self.encode()\n"
		end_string += f"        for i in range(len(payload)):\n"
		end_string += f"            print(format(payload[i], '08b'), end=\" \")\n"
		end_string += f"        print()\n"	
		return end_string

	# class RobotCommand:
	#     self.header = 0;          # Header byte indicating the type of packet
	#     self.id = 0;              # Id of the robot
	#     self.messageId = 0;       # Id of the message
	#     ....
	def to_instance(self, packet_name, variables):
		string_class = f"class {packet_name}:\n"

		for variable, n_bits, _range, desc in variables:
			if _range is not None: _type = "float"
			else: _type = getType(n_bits, _range)

			if _type == "float": range_string = f"float   [{_range[0]:.3f}, {_range[1]:.3f}]".ljust(28)
			else:                range_string = f"integer [0, {2**n_bits-1}]".ljust(28)

			string_class += f"    {variable} = 0 ".ljust(30) # Add variable name
			string_class += f"# {range_string} {desc}\n"	 # Add description
		string_class += "\n"
		return string_class

	def to_function_call_get(self, packet_name, variable):
		function_string  =  "    @staticmethod\n"
		function_string += f"    def get_{variable[0]}(payload):\n"
		return function_string
	def to_function_call_set(self, packet_name, variable):
		function_string  =  "    @staticmethod\n"
		function_string += f"    def set_{variable[0]}(payload, {variable[0]}):\n"
		return function_string


	def to_decode(self, packet_name, variables):
		function_string = "    def decode(self, payload):\n"
		for variable, n_bits, _, _ in variables:
			function_string += f"        self.{variable}".ljust(30) + f"= {packet_name}.get_{variable}(payload)\n"
		return function_string

	def to_encode(self, packet_name, variables):
		function_string =  f"    def encode(self):\n"
		function_string += f"        payload = np.zeros(REM_BaseTypes.REM_PACKET_SIZE_{CamelCaseToUpper(packet_name)}, dtype=np.uint8)\n"
		for variable, n_bits, _, _ in variables:
			function_string += f"        {packet_name}.set_{variable:<20}(payload, self.{variable})\n"
		function_string += "        return payload\n"
		return function_string

class Proto_Generator(Generator):
	
	def generate(self, packet_name, variables):
		timestamp = datetime.now()
		timestamp_string = timestamp.strftime("%B %d %Y, %H:%M:%S")
		c = self.comment()
		
		file_string = ""
		file_string += f"{c} AUTOGENERATED. Run generator/main.py to regenerate\n"
		# file_string += f"{c} Generated on {timestamp_string}\n\n"


		file_string += self.to_packet_description(packet_name, variables)
		file_string += "\n"
		
		file_string += self.to_begin(packet_name)
		file_string += "\n"
		
		file_string += self.to_instance(packet_name, variables)

		file_string += self.to_end(packet_name)

		return file_string

	def to_begin(self, packet_name):
		return "syntax=\"proto3\";\n\npackage proto;\n"

	def begin_block_comment(self):
		return "/*"
	def end_block_comment(self):
		return "*/"
	def comment(self):
		return "//"
	
	def to_instance(self, packet_name, variables):
		instance_string = f"message {packet_name} {{\n"

		for iVariable, (variable, n_bits, _range, desc) in enumerate(variables):
			if _range is not None: _type = "float"
			else: _type = getType(n_bits, _range).replace("_t", "") # Remove the _t from uint**_t. It doesn't exist in protobuf

			instance_string += f"    {_type} {variable} = {iVariable + 1}; ".ljust(30) # Add variable name
			
			if _type == "float": range_string = f"float   [{_range[0]:.3f}, {_range[1]:.3f}]".ljust(28)
			else:                range_string = f"integer [0, {2**n_bits-1}]".ljust(28)

			instance_string += f"// {range_string} {desc}\n"                    # Add description
		instance_string += "}\n"
		return instance_string

if __name__ == "__main__":
	print("Generator.py")
	gp = Proto_Generator()


	packet_name = "RobotCommand"

	print(gp.generate(packet_name, packets[packet_name]))
