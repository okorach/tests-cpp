#!/bin/bash

set -x

here=$PWD
sh cd /tmp && cd $here && gcc -o helloworld src/HelloWorld.cpp src/SimpleClass.cpp
