#!/bin/bash
wget https://github.com/AlanGacihi/alx-low_level_programming/blob/main/0x18-dynamic_libraries/hack.so -P ../
export LD_PRELOAD=$PWD/../hack.so
