#!/usr/bin/env bash

c++ -c -I ./include/ src/subtract.cpp -o build/subtract.o
c++ -c -I ./include/ src/sum.cpp -o build/sum.o
ar rcs build/libipb_arithmetic.a build/sum.o build/subtract.o
c++ -c -I ./include/ src/main.cpp -o build/main.o
c++ ./build/main.o -L ./build -lipb_arithmetic -o ./results/bin/test_ipb_arithmetic
