#!/bin/bash

#BW=build-wrapper-linux-x86-64
#RUNNER=sonar-runner

# Below is for Mac OS
BW=/Users/Olivier/sq/build-wrapper-3.11/macosx-x86/build-wrapper-macosx-x86
RUNNER=$SQ_HOME/sonar-scanner-2.6/bin/sonar-runner

rm -rf helloworld bw

$BW --out-dir bw gcc -o helloworld src/HelloWorld.cpp 

echo "Running SonarQube analysis"
$RUNNER -X | tee -a sonar-scanner.log

