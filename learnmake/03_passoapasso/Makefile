main: bla
	./bla
	rm bla
bla: bla.o
	cc bla.o -o bla

bla.o: bla.c
	cc -c bla.c -o bla.o

bla.c:
	echo "int main(void){return 0;}" > bla.c
