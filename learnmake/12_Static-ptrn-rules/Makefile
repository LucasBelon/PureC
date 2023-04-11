# Static pattern rules são outra forma de escrever
# menos em makefiles. Essas usam o wildcard %
#
# a sintaxe é:
# Targets...: target-pattern: prereq-patterns ...
# 	commands
#
# Um uso tipico dessa ferramenta é para compilar
# arquivos fonte .c em arquivos objeto .o
#
# Essa é a forma manual:

objects = foo.o bar.o all.o
all: $(objects)

# Serão compilados pelas regras implicitas
foo.o: foo.c
bar.o: bar.c
all.c: all.c

all.c:
	echo "int main(){return 0;}" > all.c

%.c:
	touch $@

clean:
	rm -f *.c *.o all


# A forma com static pattern rule é a mostrada
# abaixo:
objects = foo.o bar.o all.o


all: $(objects)

# Compilarão por regra implicita

$(objects): %.o: %.c

# Parece que o % roda uma lista de argumentos
# como um "for item in lista" yes papito c'mon

all.c:
	echo "int main(){return 0;}" > all.c

# ALL.C NÃO ENTRA PQ VAI SER CRIADO. SE JÁ EXISTE
# ENTÃO NÃO PRECISA REFAZER TRABALHO
%.c:
	touch $@

clean:
	rm -f *.c *.o all
