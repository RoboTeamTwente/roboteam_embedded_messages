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



class BaseTypeGenerator:

	def generate(self, packets, version):

		codewords = [
						  "0b00001111", "0b00110011", "0b00111100",
			"0b01010101", "0b01011010", "0b01100110", "0b01101001",
			"0b10010110", "0b10011001", "0b10100101", "0b10101010",
			"0b11000011", "0b11001100", "0b11110000", "0b11111111"
		]

		if len(codewords) < len(packets.keys()):
			print("[Error] More packets than codewords. Add more codewords. Remove packets! DO SOMETHING!!!")
			print("[Error] If you're really desparate and in a hurry, then paste the array below.")
			print("[Error] But these are not good codewords!! Might as well have no codewords.")
			codewords = ["0b" + "{0:b}".format(20 + i*5).zfill(8) for i in range(len(packets))]
			print(codewords)
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

		file_string += self.to_begin()

		file_string += self.to_constant("LOCAL_REM_VERSION", version) + "\n\n"

		type_to_size = []

		for iPacket, packet_name in enumerate(packets.keys()):
			variables = packets[packet_name]
			total_bits = sum([variable[1] for variable in variables])
			total_bytes = math.ceil(total_bits / 8)
			PACKET_NAME = CamelCaseToUpper(packet_name)

			VARIABLE_NAME_TYPE = f"PACKET_TYPE_{PACKET_NAME}".ljust(60)
			file_string += f"{self.to_constant(VARIABLE_NAME_TYPE, codewords[iPacket])} {c} {str(int(codewords[iPacket], 2))} \n"

			VARIABLE_NAME_SIZE = f"PACKET_SIZE_{PACKET_NAME}".ljust(60)
			file_string += self.to_constant(VARIABLE_NAME_SIZE, total_bytes) + "\n"

			type_to_size.append([VARIABLE_NAME_TYPE, VARIABLE_NAME_SIZE])

			for variable, n_bits, _range, _ in variables:
				range_min, range_max = 0, 2**n_bits-1
				if _range is not None: range_min, range_max = _range

				VARIABLE_NAME = CamelCaseToUpper(variable)
				file_string += self.to_constant(f"PACKET_RANGE_{PACKET_NAME}_{VARIABLE_NAME}_MIN".ljust(60), f"{range_min:.16f}".rstrip('0')) + "\n"
				file_string += self.to_constant(f"PACKET_RANGE_{PACKET_NAME}_{VARIABLE_NAME}_MAX".ljust(60), f"{range_max:.16f}".rstrip('0')) + "\n"
				file_string += self.to_constant(f"PACKET_RANGE_{PACKET_NAME}_{VARIABLE_NAME}_N_BITS".ljust(60), f"{n_bits}" + "\n")

			file_string += "\n"

		file_string += self.to_type_size_mapping(type_to_size)
		file_string += "\n"

		file_string += self.to_end()
		
		return file_string

	def begin_block_comment(self):
		raise NotImplementedError()
	def end_block_comment(self):
		raise NotImplementedError()
	def comment(self):
		raise NotImplementedError()

	def to_begin(self):
		return ""
	def to_end(self):
		return ""

	def to_constant(self, variable_name, value):
		raise NotImplementedError()

	def to_type_size_mapping(self, type_to_size):
		raise NotImplementedError()

class C_BaseTypeGenerator(BaseTypeGenerator):
	def begin_block_comment(self):
		return "/*"
	def end_block_comment(self):
		return "*/"
	def comment(self):
		return "//"

	def to_begin(self):
		begin_string = ""
		begin_string += "#ifndef __BASETYPES_H\n"
		begin_string += "#define __BASETYPES_H\n"
		begin_string += "\n"
		begin_string += "#include <stdint.h>\n"
		begin_string += "\n"
		return begin_string

	def to_end(self):
		return "#endif /*__BASETYPES_H*/"

	def to_constant(self, variable_name, value):
		return f"#define {variable_name} {value}"

	def to_type_size_mapping(self, type_to_size):
		function = """static uint8_t PACKET_TYPE_TO_SIZE(uint8_t type){\n"""
		for _type, size in type_to_size:
			function += f"    if(type == {_type}) return {size};\n"
		function += """    return 0;\n"""
		function += """}\n"""
		return function

class Python_BaseTypeGenerator(BaseTypeGenerator):
	def begin_block_comment(self):
		return '"""'
	def end_block_comment(self):
		return '"""'
	def comment(self):
		return "#"

	def to_constant(self, variable_name, value):
		return f"{variable_name} = {value}"

	def to_type_size_mapping(self, type_to_size):
		function = """def PACKET_TYPE_TO_SIZE(type):\n"""
		for _type, size in type_to_size:
			function += f"    if type == {_type}: return {size}\n"
		function += """    return 0\n"""
		function += """\n"""
		return function



if __name__ == "__main__":
	print("BaseTypesGenerator.py")

	gc = C_BaseTypeGenerator()
	gp = Python_BaseTypeGenerator()

	print("\n")
	print(gc.generate(packets, 0))
	# gc.generate(packets, 0)

	# print("\n")
	# print(gp.generate(packets))
