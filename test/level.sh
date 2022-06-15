#!/bin/bash

cd ..

current=$(ls subject/ | wc -l)

rm -f test/current/*

if [ $current -eq 0 ]
then
	subject=$(ls levels/level01 | sort -R | tail -n1)
	cp -R levels/level01/${subject} subject/
fi
if [ $current -eq 1 ]
then
	subject=$(ls levels/level02 | sort -R | tail -n1)
	cp -R levels/level02/${subject} subject/
	fi
if [ $current -eq 2 ]
then
	subject=$(ls levels/level03 | sort -R | tail -n1)
	cp -R levels/level03/${subject} subject/
fi
if [ $current -eq 3 ]
then
	subject=$(ls levels/level04 | sort -R | tail -n1)
	cp -R levels/level04/${subject} subject/
fi
if [ $current -eq 4 ]
then
	echo Congratulations, you did it!
	exit
fi

touch test/current/$subject

echo "Current task: $subject
Information can be found in subject/$subject.
Completed files must be submitted in rendu/$subject.
When you are ready to submit, type 'make grademe'."
