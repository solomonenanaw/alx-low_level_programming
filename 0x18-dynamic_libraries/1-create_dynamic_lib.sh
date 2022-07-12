#!/bin/bash
gcc -c -wall -werror -fplc *.c
gcc -shared -o liball.so *.o
