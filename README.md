# roboteam_embedded_messages (REM)

This repository holds all definitions and implementations of messages that are sent between (currently) the robothub, the basestation, and the robot. One could see this repository as a mix between Protobuf and TCP. Each packet comes with functions to compress and decompress it   , and has a header that allows for routing. This repository is header-only, and is to stay that way.

## Justification and history

Bandwidth between the robot and the basestation is limited. The instances of the classes and struct that we use within the `roboteam` repository (e.g. `RobotCommand`) can not simply be grabbed from memory and sent to the robot. Instead, they must be compressed and encoded into a byte array, making sure that the size of the packet is as small as possible. For example, the variable that holds a robot id might be 8 bits within a `RobotCommand` struct in `roboteam_ai`, but since a robot id only goes up to 15, it can be compressed to 4 bits. This is what this repository does.

In the beginning of RoboTeam Twente, all of this compression (which includes a lot of bitshifting), was done by hand. If you want to see what we were dealing with back then, please take a look at the file [packing.cpp](https://github.com/RoboTeamTwente/roboteam_robothub/blob/864fe51b29f8a7dc5cf43e65c77e91ca6da4b76e/src/packing.cpp#L145) from 2018. All of that manual bitshifting is prone to errors, and is very hard to maintain. Because if this, we only had two types of packets, `RobotCommand`, and `RobotFeedback`, which were only updated when absolutely necessary. This repository was created to solve this problem.

This repository contains a generator that takes a packet definition and generates code for that packet in C, Python, and Protobuf. This way, we can easily add new packets, and the code is much easier to maintain. At the time of writing (August 2023), I do want to apologise for the code that does the code-generation. It is quite messy.

## Generating packets

To generate the code for the packets, run the file `main.py` from within the folder `./generator`. Files are generated for each packet, in the languages C, Python, and Protobuf. These are placed in the corresponding folders `./include`, `./python`, and `./proto`. When `main.py` is executed, the version number `REM_LOCAL_VERSION` will be incremented by 1 (stored in `./generator/latest_rem_version.txt`). To generate with a specific version, use the `version` flag. For example: `python main.py --version 1`. The version goes up to at most 15, and will loop around back to 0. For more information regarding packet generation, read the README in the `./generator` folder.

### REM_BaseTypes

Next to all packet files being generated, there is a special file generated named `REM_BaseTypes.py/.h`. This file contains all the generic variables that are required for each packet. This includes most importantly for each packet its header and size. Additionally, it includes per variable its index, range, and number of bits. It also holds the current version of REM. Finally, it includes some helper functions such as _packet type to size_.

## Defining a new packet

All packet definitions can be found in the file `generator/packets.py`. New packets can be created by adding a definition of the packet to the `packets` dictionary.

### Packet structure

A single definition packet is a 2D list, where each inner list defines a single variable of the packet. For example, a cropped version of the `REM_RobotCommand`:

```python
"REM_RobotCommand" : [
    # Movement
    ["rho",                16, [0, 8], "Magnitude of movement (m/s)"],
    ["theta",              16, [-math.pi, math.pi], "Direction of movement (radians)"],
    # Dribbler
    ["dribbler",            3,  [0, 1], "Dribbler speed"],
    # Kicker / Chipper
    ["doKick",              1,  None, "Do a kick if ballsensor"],
    ["kickChipPower",       4,  [0, 6.5], "Speed of the ball in m/s"],
    ["doForce",             1,  None, "Do regardless of ballsensor"]
],
```

Each variable consists of the four elements [NAME, N BITS, RANGE, DESCRIPTION];

1. **NAME** The first element (e.g. `rho`, `theta`) indicates the name of the variable.
2. **N BITS** The second element (`3`, `4`, `16`) indicates the number of bits to be allocated for this variable. An arbitraty number of bits can be allocated, such as 7, 23, 123, or any other number. The variable with be compressed into these bits. For explanation on how floating point variables are compressed, see the section "Floating point variables" below.
3. **RANGE** The third element indicates the value range the variable can take. This is only used for floating point variables. For example, the variable `rho` can take any value between 0 and 8. The generated code automatically transforms a floating point variable to an integer and back.
4. **DESCRIPTION** The fourth element is the description of the variable.

A packet must always start with a `header` variable! This variable is used to indicate the type of the packet. For example, `RobotCommand` has header `15` and `RobotFeedback` has header `51`.

### Default variables

Some variables will automatically be added to each packet definition during generation. These variables can be found in the variable `generic_packet_header` in `packets.py`. These variables contain important information regarding packet type, routing, payload size, and REM version. It's the REM equivalent of a TCP packet header. Each packet is required to have these variables (with the exception of the REM_SX1280Filler packet) to ensure that basestation code and logging code works properly.

### Design patterns

All packet names are prepended with `REM_`. All variables, both packet names and variable names, are in camelCase. The name `BaseTypes` is reserved and can not be used as a packet name.

## Floating point variables

Floating point variables cannot directly be sent between two systems (e.g. robot and computer), because their implementations of a floating point might differ. Instead, a float is first converted to an integer, sent to the other system, and then converted back to a float. This of course leads to a loss of precision, which depends on the number of bits that are reserved for the float. For example, take a floating point variable that can take a value between 0 and 1. 4 bits are reserved for the variable, resulting in a total of 2^4 = 16 different values.

```text
FLOAT IN   0   .1  .2  .3  .4  .5  .6  .7  .8  .9  1 
INT        0   2   3   5   6   8   9   11  12  14  15
FLOAT OUT  0  .13 .2  .33  .4  .53 .6  .73 .8  .93 1 
```

## Python example

```python
# It is assumed that this code runs next to the roboteam_embedded_messages folder, not within it
from roboteam_embedded_messages.python import REM_BaseTypes
from roboteam_embedded_messages.python.REM_RobotCommand  import REM_RobotCommand
from roboteam_embedded_messages.python.REM_RobotFeedback import REM_RobotFeedback

cmd = REM_RobotCommand()
# Set the required variables
cmd.header = REM_BaseTypes.REM_PACKET_TYPE_REM_ROBOT_COMMAND
cmd.toRobotId = 7
cmd.fromPC = 1
cmd.remVersion = REM_BaseTypes.REM_LOCAL_VERSION
cmd.payloadSize = REM_BaseTypes.REM_PACKET_SIZE_REM_ROBOT_COMMAND
# Set the variables to trigger the kicker
cmd.doKick = True
cmd.kickChipPower = 0.5
cmd.doForce = True

# Convert the command to bytes
cmd_in_bytes = cmd.encode()

### Send the packet to the robot somehow, such as by using the Pyserial library
### Receive bytes back from the robot representing a REM_RobotFeedback packet

feedback_in_bytes = receive_something_somehow()
fb = REM_RobotFeedback()
fb.decode(feedback_in_bytes)
print("Received feedback packet from robot", fb.fromRobotId)
if fb.remVersion != REM_BaseTypes.REM_LOCAL_VERSION:
 print("Warning! The REM versions do not match. Somewhere something requires an update")
```
