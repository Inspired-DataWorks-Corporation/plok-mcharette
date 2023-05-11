#/bin/bash
cpp -P -I./inc -include ./inc/version.inc ./src/$1 ./msh/$1
mongosh "mongodb+srv://cluster0.mjj6dgl.mongodb.net/Property-Lok" --apiVersion 1 --username markcharette --password '0$@^!(%$' -f ./msh/$1

