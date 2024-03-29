import os
import math
from packets import packets
from datetime import datetime


# REM_RobotCommand => REM_ROBOT_COMMAND
def CamelCaseToUpper(word):
	# Find all indices where a lowercase letter is followed by an uppercase letter
	indices = [ i for i in range(1, len(word)) if word[i-1].islower() and word[i].isupper() ]
	# Insert a _ at all of those indices
	for i in reversed(indices):	word = word[:i] + "_" +  word[i:]
	# Uppercase word
	word = word.upper()

	return word

# packet should be a definition from packet.py, e.g. 
# [
#	['header',    8, None, 'Header byte indicating the type of packet'], 
#	['toRobotId', 4, None, 'Id of the receiving robot'],
# ]
def packet_to_size_in_bytes(packet):
	total_bits = sum([variable[1] for variable in packet])
	total_bytes = math.ceil(total_bits / 8)
	return total_bytes

class BaseTypeGenerator:

	def generate(self, packets, version):

		codewords = ['0b00100001', '0b00100010', '0b00100100', '0b00100111', '0b00101000', '0b00101011', '0b00101101', '0b00101110', '0b00110000', '0b00110011', '0b00110101', '0b00110110', '0b00111001', '0b00111010', '0b00111100', '0b00111111', '0b01000001', '0b01000010', '0b01000100', '0b01000111', '0b01001000', '0b01001011', '0b01001101', '0b01001110', '0b01010000', '0b01010011', '0b01010101', '0b01010110', '0b01011001', '0b01011010', '0b01011100', '0b01011111', '0b01100000', '0b01100011', '0b01100101', '0b01100110', '0b01101001', '0b01101010', '0b01101100', '0b01101111', '0b01110001', '0b01110010', '0b01110100', '0b01110111', '0b01111000', '0b01111011', '0b01111101', '0b01111110', '0b10000001', '0b10000010', '0b10000100', '0b10000111', '0b10001000', '0b10001011', '0b10001101', '0b10001110', '0b10010000', '0b10010011', '0b10010101', '0b10010110', '0b10011001', '0b10011010', '0b10011100', '0b10011111', '0b10100000', '0b10100011', '0b10100101', '0b10100110', '0b10101001', '0b10101010', '0b10101100', '0b10101111', '0b10110001', '0b10110010', '0b10110100', '0b10110111', '0b10111000', '0b10111011', '0b10111101', '0b10111110', '0b11000000', '0b11000011', '0b11000101', '0b11000110', '0b11001001', '0b11001010', '0b11001100', '0b11001111', '0b11010001', '0b11010010', '0b11010100', '0b11010111', '0b11011000', '0b11011011', '0b11011101', '0b11011110', '0b11100001', '0b11100010', '0b11100100', '0b11100111', '0b11101000', '0b11101011', '0b11101101', '0b11101110', '0b11110000', '0b11110011', '0b11110101', '0b11110110', '0b11111001', '0b11111010', '0b11111100']

		if len(codewords) < len(packets.keys()):
			print("[Error] More packets than codewords. Add more codewords. Remove packets! DO SOMETHING!!!")
			exit()

		timestamp = datetime.now()
		timestamp_string = timestamp.strftime("%B %d %Y, %H:%M:%S")
		c = self.comment()
		
		file_string = ""

		file_string += f"{c} AUTOGENERATED. Run generator/main.py to regenerate\n"
		# file_string += f"{c} Generated on %s\n\n" % timestamp.strftime("%B %d %Y, %H:%M:%S")

		file_string += f"{c} Warning : Check the unicode table before assigning a byte, to make sure that the byte isn't used for anything special : https://unicode-table.com/\n"
		file_string += f"{c} For example, don't use the following bytes\n"
		file_string += f"{c} 0b00000000 : The null-terminator, used to signal the end of strings / arrays / etc.\n"
		file_string += f"{c} 0b00001010 : The byte for newline, used for line termination.\n"
		file_string += f"\n"

		file_string += self.to_begin(packets) + "\n"

		largest_packet_in_bytes = max([ packet_to_size_in_bytes(packets[packet_name]) for iPacket, packet_name in enumerate(packets.keys())])

		file_string += self.to_constant("REM_LOCAL_VERSION", version) + "\n"
		file_string += self.to_constant("REM_LARGEST_PACKET_IN_BYTES", largest_packet_in_bytes) + "\n"

		file_string += self.begin_block_comment()
		file_string += """
Currently, we're splitting the SX1280 256 byte buffer in half. 128 for sending, 128 for receiving
Set to 127, because that's the max value as defined in the SX1280 datasheet
Table 14-38: Payload Length Definition in FLRC Packet, page 124
"""
		file_string += self.end_block_comment() + "\n"

		file_string += self.to_constant("REM_MAX_TOTAL_PACKET_SIZE_SX1280", 127) + "\n"
		file_string += self.to_constant("REM_TOTAL_NUMBER_OF_PACKETS", len(packets)) + "\n\n"

		type_to_size, type_to_index, type_to_obj, type_to_valid = [], [], [], []

		for iPacket, packet_name in enumerate(packets.keys()):
			
			total_bytes = packet_to_size_in_bytes(packets[packet_name])
			PACKET_NAME = CamelCaseToUpper(packet_name)

			VARIABLE_NAME_TYPE = f"REM_PACKET_TYPE_{PACKET_NAME}".ljust(60)
			file_string += f"{self.to_constant(VARIABLE_NAME_TYPE, codewords[iPacket])} {c} {str(int(codewords[iPacket], 2))} \n"

			VARIABLE_NAME_SIZE = f"REM_PACKET_SIZE_{PACKET_NAME}".ljust(60)
			file_string += self.to_constant(VARIABLE_NAME_SIZE, total_bytes) + "\n"

			VARIABLE_NAME_INDEX = f"REM_PACKET_INDEX_{PACKET_NAME}".ljust(60)
			file_string += self.to_constant(VARIABLE_NAME_INDEX, iPacket) + "\n"

			type_to_size.append([VARIABLE_NAME_TYPE, VARIABLE_NAME_SIZE])
			type_to_index.append([VARIABLE_NAME_TYPE, iPacket])
			type_to_obj.append([VARIABLE_NAME_TYPE, packet_name])
			type_to_valid.append(VARIABLE_NAME_TYPE)


			for variable, n_bits, _range, _ in packets[packet_name]:
				range_min, range_max = 0, 2**n_bits-1
				if _range is not None: range_min, range_max = _range

				# Return simply 'x' if integer range, or 'x.[abcde]F' if float range
				# So: float 8.4000 -> 8.4F | float 8.0000F -> 8.F | int 8 -> 8
				get_value_string = lambda x: f"{x}" if _range is None else f"{x:.16f}".rstrip('0') + self.to_float()

				VARIABLE_NAME = CamelCaseToUpper(variable)
				file_string += self.to_constant(f"REM_PACKET_RANGE_{PACKET_NAME}_{VARIABLE_NAME}_MIN".ljust(60), get_value_string(range_min) ) + "\n"
				file_string += self.to_constant(f"REM_PACKET_RANGE_{PACKET_NAME}_{VARIABLE_NAME}_MAX".ljust(60), get_value_string(range_max) ) + "\n"
				file_string += self.to_constant(f"REM_PACKET_RANGE_{PACKET_NAME}_{VARIABLE_NAME}_N_BITS".ljust(60), f"{n_bits}" + "\n")

			file_string += "\n"

		file_string += self.to_type_size_mapping(type_to_size)
		file_string += self.to_type_index_mapping(type_to_index)
		file_string += self.to_type_obj_mapping(type_to_obj)
		file_string += self.to_type_valid_mapping(type_to_valid)
		file_string += "\n"

		file_string += self.to_end()
		
		return file_string

	def begin_block_comment(self):
		raise NotImplementedError()
	def end_block_comment(self):
		raise NotImplementedError()
	def comment(self):
		raise NotImplementedError()

	def to_begin(self, packets):
		return ""
	def to_end(self):
		return ""

	def to_constant(self, variable_name, value):
		raise NotImplementedError()

	def to_type_size_mapping(self, type_to_size):
		raise NotImplementedError()

	def to_type_index_mapping(self, type_to_index):
		raise NotImplementedError()
	
	def to_type_obj_mapping(self, types):
		return ""

	def to_float(self):
		return ""

class C_BaseTypeGenerator(BaseTypeGenerator):
	def begin_block_comment(self):
		return "/*"
	def end_block_comment(self):
		return "*/"
	def comment(self):
		return "//"

	def to_begin(self, packets):
		begin_string = ""
		begin_string += "#ifndef __BASETYPES_H\n"
		begin_string += "#define __BASETYPES_H\n"
		begin_string += "\n"
		begin_string += "#include <stdint.h>\n"
		begin_string += "#include <stdbool.h>\n"
		begin_string += "\n"
		return begin_string

	def to_end(self):
		return "#endif /*__BASETYPES_H*/"

	def to_constant(self, variable_name, value):
		return f"#define {variable_name} {value}"

	def to_type_size_mapping(self, type_to_size):
		function = """static uint8_t REM_PACKET_TYPE_TO_SIZE(uint8_t type){\n"""
		for _type, size in type_to_size:
			function += f"    if(type == {_type}) return {size};\n"
		function += """    return 0;\n"""
		function += """}\n"""
		return function

	def to_type_index_mapping(self, type_to_index):
		function = """static int8_t REM_PACKET_TYPE_TO_INDEX(uint8_t type){\n"""
		for _type, index in type_to_index:
			function += f"    if(type == {_type}) return {index};\n"
		function += """    return -1;\n"""
		function += """}\n"""
		return function	

	def to_type_valid_mapping(self, types):
		function = """static bool REM_PACKET_TYPE_TO_VALID(uint8_t type){\n"""
		for _type in types:
			function += f"    if(type == {_type}) return true;\n"
		function += """    return false;\n"""
		function += """}\n"""
		return function		

	def to_float(self):
		return "F"

class Python_BaseTypeGenerator(BaseTypeGenerator):
	def begin_block_comment(self):
		return '"""'
	def end_block_comment(self):
		return '"""'
	def comment(self):
		return "#"

	def to_constant(self, variable_name, value):
		return f"{variable_name} = {value}"

	def to_begin(self, types):
		import_calls = ""
		for packet_name in packets.keys():
			import_calls += f"from .{packet_name.ljust(40)} import {packet_name}\n"
		return import_calls

	def to_type_size_mapping(self, type_to_size):
		function = """def REM_PACKET_TYPE_TO_SIZE(type):\n"""
		for _type, size in type_to_size:
			function += f"    if type == {_type}: return {size}\n"
		function += """    return 0\n"""
		function += """\n"""
		return function

	def to_type_index_mapping(self, type_to_index):
		function = """def REM_PACKET_TYPE_TO_INDEX(type):\n"""
		for _type, index in type_to_index:
			function += f"    if type == {_type}: return {index}\n"
		function += """    return 0\n"""
		function += """\n"""
		return function	

	def to_type_obj_mapping(self, type_to_obj):
		function = """def REM_PACKET_TYPE_TO_OBJ(type):\n"""
		for _type, obj in type_to_obj:
			function += f"    if type == {_type}: return {obj}\n"
		return function

	def to_type_valid_mapping(self, types):
		function = """def REM_PACKET_TYPE_TO_VALID(type):\n"""
		for _type in types:
			function += f"    if type == {_type}: return True\n"
		function += """    return False\n"""
		return function	


if __name__ == "__main__":
	print("BaseTypesGenerator.py")

	gc = C_BaseTypeGenerator()
	gp = Python_BaseTypeGenerator()

	print("\n")
	# gp.generate(packets, 0)
	print(gp.generate(packets, 0))
	# gc.generate(packets, 0)

	# print("\n")
	# print(gp.generate(packets))
