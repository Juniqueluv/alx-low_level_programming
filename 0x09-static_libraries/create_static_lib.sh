#!/bin/bash
gcc -c *.c
ar rc lilall.a *.o
ranlib liball.a
