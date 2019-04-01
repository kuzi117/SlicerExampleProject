#!/usr/bin/env bash

# If the since variable is not set we have nothing to compare to.
if [ -z "${since}" ]; then
  echo "The \$since variable was not set!"
  echo "We can't make tests if we have nothing to compare to!"
  exit 1
fi

# Make the slicer tools.
git clone https://github.com/kuzi117/slicer.git
cd slicer
cmake .
make -j4

# Set up executables.
differ="${PWD}/src/differ/differ"
producer="${PWD}/src/sliceProducer/sliceProducer"
builder="${PWD}/lib/cgBuilder/libcgBuilder.so"

# Check for existence.
if [ ! -f ${differ} ]; then
  echo "Differ didn't exist at assumed path."
  exit 1
else
  echo "Differ: ${differ}"
fi
if [ ! -f ${differ} ]; then
  echo "Slice producer didn't exist at assumed path."
  exit 1
else
  echo "Slice producer: ${producer}"
fi
if [ ! -f ${differ} ]; then
  echo "Call graph analyser didn't exist at assumed path."
  exit 1
else
  echo "Call graph analyser: ${builder}"
fi
