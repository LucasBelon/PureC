
all: main

main: main.c Utils.o 
	gcc -omain main.c Utils.o 
	rm Utils.o

Utils.o: Utils.c
	gcc -c Utils.c
