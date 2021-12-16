#!/bin/bash
OPTS="-Wall"

rm -rf build
mkdir build

# Build directly each file
gcc $OPTS -o build/HelloWorld src/HelloWorld.c
