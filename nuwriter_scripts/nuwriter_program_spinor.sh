#!/bin/bash

set -x -e

python3 nuwriter.py -c header-spinor.json

python3 nuwriter.py -p pack-spinor.json

python3 nuwriter.py -a ddrimg/MA35D03F864C.bin

python3 nuwriter.py -w spinand pack/pack.bin
