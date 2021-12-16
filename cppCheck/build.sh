#!/bin/bash

#BW=build-wrapper-linux-x86-64
#RUNNER=sonar-runner

# Below is for Mac OS
BW=/Users/Olivier/sq/build-wrapper-3.10/macosx-x86/build-wrapper-macosx-x86
RUNNER=$SQ_HOME/sonar-scanner-2.6/bin/sonar-scanner

echo "REMOVE PREVIOUS BUILD AND ALL INTERMEDIATE GCOV FILES"
rm -rf ./helloworld ./bw/build-wrapper*.*

echo "BUILDING"

$BW --out-dir bw gcc -o helloworld src/*.cpp

cppcheck --xml --xml-version=2 --enable=all src/*.cpp 2> cppcheck-report.xml

echo "Running SonarQube analysis"
$RUNNER -X | tee -a sonar-scanner.log

