#!/bin/bash

# Below is for Mac OS

rm -rf bw

echo "BUILDING"

cd module2/src;gcc -std=c++14 -c *.cpp; cd ../../
cd module1/src;gcc -std=c++11 -c *.cpp; gcc -o HelloMulti *.o ../../module2/src/*.o; cd ../../

