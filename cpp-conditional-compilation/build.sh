#!/bin/bash
BW=/Users/Olivier/sq/build-wrapper-macosx-x86/build-wrapper-macosx-x86

rm -rf bw
$BW --out-dir bw make -f makefile.screen
sonar-scanner -Dsonar.scm.disabled=true

rm -rf bw
$BW --out-dir bw make -f makefile.noscreen
sonar-scanner  -Dsonar.scm.disabled=true -Dsonar.branch.name=branch-noscreen
