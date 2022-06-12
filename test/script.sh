#!/bin/bash

question=$(ls current/)

echo Testing $question

gcc program.c questions/$question/test.c -o test

cd ../rendu/${question}/

# Need to change all the function questions to have fn_ in front of them, or find different solution

if [[ $question =~ .*"ft_"* ]];
then
	gcc "../../test/questions/${question}/main.c" "${question}.c"
else
	gcc "${question}.c"
fi

cd ../../test

gcc compare.c "questions/${question}/test.c" gnl/get_next_line_bonus.c gnl/get_next_line_bonus.h gnl/get_next_line_utils_bonus.c -D BUFFER_SIZE=42 -o compare

rm -f "../rendu/${question}/trace.txt"
touch "../rendu/${question}/trace.txt"

./test "../rendu/${question}/a.out" | ./compare "questions/${question}/compare.txt" "../rendu/${question}/trace.txt"
#> "questions/${question}/compare.txt" && ./test "../rendu/${question}/a.out" >> "questions/${question}/compare.txt"
