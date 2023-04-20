#! /bin/bash

cc -c imprimeMatriz.c
cc -c criaElementos.c
cc imprimeMatriz.o criaElementos.o -o programa
./programa
rm *.o programa
