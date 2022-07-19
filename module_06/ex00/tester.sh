#!/bin/bash

make re

echo "INT TEST"

#MAX INT

echo "MAX INT"
./conversion 2147483647

echo "--------------------------------"

#MIN INT

echo "MIN INT"
./conversion -2147483648

echo "--------------------------------"

#MAX UINT

echo "HIGHTER THAN MAX INT"
./conversion 4294967295

echo "--------------------------------"

echo "LOWER THAN MIN INT"
./conversion -4294967295

echo "--------------------------------"

echo "NOW TRYING ERRORS"

echo "4-2"
./conversion 4-2

echo "--------------------------------"

echo "--42"
./conversion --42

echo "--------------------------------"

echo "42-"
./conversion 42-

echo "--------------------------------"

echo "42a"
./conversion 42a

#####################################################################
#DOUBLE TEST

echo "DOUBLE TEST"

./conversion 4147483647.0

echo "--------------------------------"

./conversion -4147483647.0

echo "--------------------------------"

./conversion 4147483647.0

echo "--------------------------------"

./conversion .123

echo "--------------------------------"
echo "TRYING ERROS"

echo "4-2.0"
./conversion 4-2.0

echo "--------------------------------"

echo "--42.0"
./conversion --42.0

echo "--------------------------------"

echo "42-.0"
./conversion 42-.0

echo "--------------------------------"

echo "42a.0"
./conversion 42a.0

##############################################################
#FLOAT TEST

echo "--------------------------------"

echo "FLOAT TEST (SAME AS BEFORE BUT YOU PUT AN F)"

./conversion 4147483647.0f

echo "--------------------------------"

./conversion -4147483647.0f

echo "--------------------------------"

./conversion 4147483647.0f

echo "--------------------------------"

./conversion .123f

echo "--------------------------------"
echo "TRYING ERROS"

echo "4-2.0f"
./conversion 4-2.0f

echo "--------------------------------"

echo "--42.0f"
./conversion --42.0f

echo "--------------------------------"

echo "42-.0f"
./conversion 42-.0f

echo "--------------------------------"

echo "42a.0f"
./conversion 42a.0f

################################################
#CHAR TEST

echo "--------------------------------"

echo "a"
./conversion a

echo "--------------------------------"

echo "?"
./conversion ?

echo "--------------------------------"

echo "this is a string not a char"
./conversion thisisastringnotachar

echo "--------------------------------"

echo "SPECIAL CASES"

echo "+inf"
./conversion +inf

echo "--------------------------------"

echo "-inf"
./conversion -inf

echo "--------------------------------"

echo "nan"
./conversion nan

echo "--------------------------------"

echo "+inff"
./conversion +inff

echo "--------------------------------"

echo "-inff"
./conversion -inff

echo "--------------------------------"

echo "nanf"
./conversion nanf