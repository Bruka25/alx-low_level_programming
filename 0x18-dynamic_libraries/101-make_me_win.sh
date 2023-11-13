#!/bin/bash
wget -P .. https://github.com/Bruka25/alx-low_level_programming/blob/master/0x18-dynamic_libraries/libwin.so
export LD_PRELOAD="$PWD/../libwin.so"
