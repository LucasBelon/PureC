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
