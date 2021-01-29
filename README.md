# Ford FG HVAC Display - Python-CAN & FPV Edition

Information available at https://fordforums.com.au/showthread.php?t=11475851, influenced by https://fordforums.com.au/showthread.php?t=11430769.

**Note: This code is under the GPLv3 license. Any modifications must have the source code distributed under this license.**

# Files

## Unmaintained

I am not using the following applications/scripts anymore so I'm not maintaining them, but they could be used as a reference.

### PythonGUI
This is a Python GUI (Kivy) version, where an Arduino would be used to read the CAN data and send it over serial to a 
Raspberry Pi or similar, and the Kivy app would display the information on the head unit's screen via RCA composite input.

#### Arduino
- `CANReader.ino`: Reads the HVAC information from the CAN BUS and sends it over serial.

#### Python
- `HVACDisplay.py`: Receives the HVAC information from the Arduino and displays it on the GUI.
- `HVACDisplay.kv`: The UI markup for the Python app.

# Install Kivy on RPI  
`sudo git clone https://github.com/techcoder20/RPI-Kivy-Installer.git ~/RPI-Kivy-Installer`
`cd ~/RPI-Kivy-Installer`  
`sudo chmod +x install.sh`  
`sudo ./install.sh`  

# More Info:  
https://github.com/jakka351/FG-Falcon
