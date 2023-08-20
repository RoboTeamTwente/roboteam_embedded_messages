# REM Packet generation

## main.py

`main.py` calls all the Generators and BaseTypeGenerators, and stores their outputs in the right files. Additionally, it increments the REM version number, and moves the generated files to the right folders.

## packets.py

`packets.py` contains all the packet definitions. Each packet is defined as a 2D list, where each inner list defines a single variable of the packet. An explanation of the packet structure can be found in the main `README.md`.

## Generator.py
`Generator.py` is responsible for converting the packet definitions into code. Generator contains a base class `Generator`, which is inherited by all the other Generators (`C_Generator`, `Python_Generator`, `Proto_Generator`). The base class `Generator` contains multiple functions which have to be overriden by the inheriting generators. Currently, these functions are:

* `convert_type` (optional)
* `cast_to_type`
* `begin_block_comment`
* `end_block_comment`
* `comment`
* `get_payload_name` 
* `get_payload_variable`
* `get_indent` (optional)
* `to_float` (optional)
* `to_begin` (optional)
* `to_end` (optional)
* `to_payload_instance` (optional)
* `to_instance`
* `to_function_call_get`
* `end_function` (optional)
* `to_encode`
* `to_decode`

## BaseTypeGenerator.py
`BaseTypeGenerator.py` works in the same way as `Generator.py`, but is responsible for generating the `REM_BaseTypes` file. It contains a base class `BaseTypeGenerator`, which is inherited by all the other BaseTypeGenerators (`C_BaseTypeGenerator`, `Python_BaseTypeGenerator`). The base class `BaseTypeGenerator` contains multiple functions which have to be overriden by the inheriting generators. Currently, these functions are:

* `begin_block_comment`
* `end_block_comment`
* `comment`
* `to_begin` (optional)
* `to_end` (optional)
* `to_constant`
* `to_type_size_mapping`
* `to_type_index_mapping`
* `to_type_obj_mapping` (optional)
* `to_float` (optional)

## REM Version

A version number `remVersion` is incremented each time `main.py` is run. It resets back to 0 after it hit 15. This versions is embedded into the code, in the variable `REM_LOCAL_VERSION` (look in `BaseTypes.h` and `BaseTypes.py`). The current version is stored in the file `latest_rem_version.txt`. Versioning has been added to be able to check that all robots / basestations / scripts run the same version of REM. The REM version is added to most packet, via the `remVersion` variable. To generate a specific version, run `main.py --version <your version number here>`. An example; If the basestation receives a packet from a robot which contains `remVersion = 5`, but its `REM_LOCAL_VERSION = 6`, then you know that the robot runs an outdated REM version. 