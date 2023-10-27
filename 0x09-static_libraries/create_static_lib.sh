#!/bin/sh

gcc *.c
ar -rc liball.a *.o
ranlib liball.a
