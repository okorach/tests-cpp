#!/bin/bash

#BW=build-wrapper-linux-x86-64
#RUNNER=sonar-runner

# Below is for Mac OS
BW=/Users/Olivier/sq/build-wrapper-3.8/macosx-x86/build-wrapper-macosx-x86
RUNNER=$SQ_HOME/sonar-runner-2.4/bin/sonar-runner

echo "REMOVE PREVIOUS BUILD AND ALL INTERMEDIATE GCOV FILES"
rm -rf helloworld bw

echo "BUILDING"

$BW --out-dir bw gcc -o helloworld src/HelloWorld.cpp ; RC=$?; cd -

if [ $RC -ne 0 ]; then
  echo "BUILD FAILURE"
else
  echo "BUILD SUCCESS"
fi

echo "Running SonarQube analysis"
$RUNNER -X | tee -a sonar-scanner.log

