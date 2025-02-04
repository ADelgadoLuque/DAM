#!/bin/bash
for var in ./test3/*log*
do
if grep -q "ERROR" $var
then
  echo "El log $var tiene errores"
else
  echo "El log $var no tiene errores"
fi
done