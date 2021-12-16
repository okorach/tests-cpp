#!/bin/bash
OPTS="-Wall -DCOMPILER_OPTION_A"

rm -rf build
mkdir build

# Build directly each file
g++ $OPTS -o build/BiggestUnInt src/BiggestUnInt.cpp
g++ $OPTS -o build/HelloWorld src/HelloWorld.cpp
g++ $OPTS -o build/SimpleClass src/SimpleClass.cpp
