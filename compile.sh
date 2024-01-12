#!/bin/bash

echo "compiling $1"
rm lex.yy.c 
rm $1.tab.c 
rm $1.tab.h
rm $1
bison -d $1.y
lex $1.l
g++ OOP_func.cpp lex.yy.c $1.tab.c -std=c++11 -o $1