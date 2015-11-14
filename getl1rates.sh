#!/bin/bash
if [ $# -ne 1 ]
then
  echo "Usage: ./getl1rates.sh <raw-file> <output>"
  exit 1
fi

root -b $i 

run=`head -n1 $1 | awk '{print $2}'`
integral=`head -n3 $1 | tail -n1 | awk '{print $2}'`

