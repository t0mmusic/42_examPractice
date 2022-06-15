#!/bin/bash

#gives the name of the current program or function being tested.
question=$(ls current/)

#Saves the number of files in the testing folder. 2 for a program, 3 for a function.
function=$(ls questions/$question/ | wc -l)

echo Testing $question

#compiles the input tester with the unit tests.
gcc program.c questions/$question/test.c -o test

if ! [ -d  "../rendu/${question}/" ]; then
	echo "Missing directory!"
	exit
fi

#Move to the directory where the program will be compiled.
cd ../rendu/${question}/

if ! [ -f  ${question}.c ]; then
	echo "${question}.c not found!"
	exit
fi

#Compile the program. If it is a function, it is compiled with a new main, otherwise it is compiled normally.
if [[ $function -gt 2 ]];
then
	gcc "../../test/questions/${question}/main.c" "${question}.c"
else
	gcc "${question}.c"
fi

#Move back to testing folder
cd ../../test

#Compile the output comparison checker.
gcc compare.c "questions/${question}/test.c" gnl/get_next_line_bonus.c gnl/get_next_line_bonus.h gnl/get_next_line_utils_bonus.c -D BUFFER_SIZE=42 -o compare

#Remove previous trace file, create a new one.
rm -f "../rendu/${question}/trace.txt"
touch "../rendu/${question}/trace.txt"

#Run the input tests piped with the output comparison checker.
./test "../rendu/${question}/a.out" | ./compare "questions/${question}/compare.txt" "../rendu/${question}/trace.txt"
#> "questions/${question}/compare.txt" && ./test "../rendu/${question}/a.out" >> "questions/${question}/compare.txt"
