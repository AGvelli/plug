# Plug

Plug software for Fender Mustang amplifier.

Software for Fender Mustang Amps. This is a fork of offa/plug, based on piorekf's Plug.


## What's new

- Extended presets from 8 to 24.

- Added logic to select presets using buttons connected to gpio.


## Requirements
Raspberry pi OS:

```
apt-get install cmake libusb-1.0-0-dev googletest qtbase5-dev qtchooser qt5-qmake qtbase5-dev-tools libgmock-dev 

```

Get the source code from GitHub:
```
wget https://github.com/milliways2/wPi/archive/refs/heads/master.zip 
```
Unzip the code and cd to the source folder; from source folder run:
```
./build
```


## Building

Building and Testing is done through CMake:

```
mkdir build && cd build
cmake ..
make
make unittest
```


## Credits

Thanks to *piorekf* and *offa*.


## License

**GNU General Public License (GPL)**

    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.
