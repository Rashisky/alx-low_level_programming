#!/bin/bash
ar rc liball.a $(gcc -c *.c | ls *.o)
ranlib liball.a
