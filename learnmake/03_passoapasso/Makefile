# Por conta da estrutura hierarquica, é mais
# fácil ler makefiles de baixo pra cima.

# Executamos o arquivo e apagamos tudo o que
# tiver sido produzido até então que não seja
# interessante
main: bla
	./bla
	rm bla
	rm bla.o
	rm bla.c

# Compilamos em arquivo executável nosso objeto
bla: bla.o
	cc bla.o -o bla

# Compilamos em objeto linkável nosso código
bla.o: bla.c
	cc -c bla.c -o bla.o

# Criamos um código fonte vazio mas válido
bla.c:
	echo "int main(void){return 0;}" > bla.c
