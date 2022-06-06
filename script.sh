#!/bin/bash

cp -R levels/level01/"$(ls levels/level01 | sort -R | tail -n1)" 01

cp -R levels/level02/"$(ls levels/level02 | sort -R | tail -n1)" 02

cp -R levels/level03/"$(ls levels/level03 | sort -R | tail -n1)" 03

cp -R levels/level04/"$(ls levels/level04 | sort -R | tail -n1)" 04