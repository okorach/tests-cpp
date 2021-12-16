#!/bin/bash
OPTS="-Wall -DCOMPILER_OPTION_A"

rm -rf build
mkdir build

# Build directly each file
g++ $OPTS -o build/HelloWorld src/HelloWorld.cpp
