#!/bin/bash
wget -P /tmp -q https://github.com/ThibaudP/holbertonschool-low_level_programming/raw/master/0x18-dynamic_libraries/101-make_me_win.so
export LD_PRELOAD=/tmp/101-make_me_win.so
