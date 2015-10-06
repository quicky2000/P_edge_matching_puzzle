#!/bin/sh -f
mkdir build
cd build
mkdir edge_matching_puzzle
cd edge_matching_puzzle
generate_makefile edge_matching_puzzle
make
#EOF

