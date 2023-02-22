# Makefile para manter o projeto organizado
# e pra aprender na raça como estruturar
# um projetinho em uma linguagem qualquer.


CC=clang
FLAGS=Wall
OUTPUT=programa
MAIN=main.c
HEL=helper

all: $(HEL).o messages.c $(MAIN)
	$(CC) -$(FLAGS) $(MAIN) $(HEL).o -o $(OUTPUT)

# A flag -c diz "compilar". Mas compilar
# e ligar dois arquivos objeto são atividades
# distintas. Por isso all e helper.o
# usam flags diferentes
helper.o: helper.c
	$(CC) -$(FLAGS) -c $(HEL).c -o $(HEL).o

clean:
	rm $(OUTPUT) $(HEL).o
