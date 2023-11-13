#!/bin/bash
wget -q -O /tmp/winlib.so https://github.com/Bruka25/alx-low_level_programming/blob/master/0x18-dynamic_libraries/libwin.so 
export LD_PRELOAD=/tmp/winlib.so
