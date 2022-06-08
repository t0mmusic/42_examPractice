#!/bin/bash

QONE=$(ls ../01 | head -1)

echo Testing $QONE

gcc program.c $QONE/test.c -o test

#gcc compare.c gnl/get_next_line_bonus.c gnl/get_next_line_bonus.h gnl/get_next_line_utils_bonus.c -D BUFFER_SIZE=42 -o compare

./test "../01/${QONE}/a.out" | ./compare "${QONE}/compare.txt"