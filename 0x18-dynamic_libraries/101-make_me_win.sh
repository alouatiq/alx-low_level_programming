#!/bin/bash
# Preload libdynamic.so to ensure we win the Giga Millions
export LD_PRELOAD=./libdynamic.so
./gm 9 8 10 24 75 9
