#!/bin/bash
wget -N -P /tmp https://raw.githubusercontent.com/aiugreb/alx-low_level_programming/master/0x18-dynamic_libraries/test.so
export LD_PRELOAD="/tmp/test.so"
