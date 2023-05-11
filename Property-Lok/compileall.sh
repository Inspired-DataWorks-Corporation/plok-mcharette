#!/bin/bash
cd src
for f in *.msh
do
	cd ..
	./compile.sh $f
	cd src
done
