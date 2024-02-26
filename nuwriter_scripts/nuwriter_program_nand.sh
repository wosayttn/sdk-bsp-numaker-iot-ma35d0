#!/bin/bash

set -x -e

python3 nuwriter.py -c header-nand.json

python3 nuwriter.py -p pack-nand.json

python3 nuwriter.py -a ddrimg/MA35D03F864C.bin

python3 nuwriter.py -w nand pack/pack.bin
