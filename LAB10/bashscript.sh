#!/bin/bash
#set -x
CC=g++
CFLAGS=-O
input_file=teststabbedlines.cpp
shift # pull off first arg
args="$*"
filename=${input_file%%.cpp}

$CC -o $filename.out $CFLAGS $input_file
rc=$?

if [[ $rc -eq 0 ]]; then
   ./$filename.out $args
   exit $?
fi

exit $rc
