# Print out file information about every .c file
print: $(wildcard *.c)
	ls -la $?

# É uma boa prática circundar o wildcard *
# com a função "wildcard". 
# O uso de * não se limita apenas à um
# caractere coringa. Usar a função nos garante
# que o make entenderá isso.

thing_wrong := *.o # this will get expanded
thing_right := $(wildcard *.o)

all: one two three four

#Falha pq thing_wrong é a string "*.o"
one:
#	$(thing_wrong)

#Fica como *.o se não houver correspondência
#two: *.o
two:

#Funciona como o esperado (não fazer nada)
three: $(thing_right)

#Mesma coisa que o three
four: $(wildcard *.o)
