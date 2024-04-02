#!/bin/bash
gcc -c -fPIC *.
gcc -shared -o liball.so *.o
rm *.o

