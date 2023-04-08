# Podemos usar caracteres coringa em makefiles. O
# importante é que alguns sejam explicitamenre
# declarados como wildcards.

# Imprime informações sobre todos os arquivos .c
print: $(wildcard *.c)
	ls -la $?

# $? é uma variável automática que armazena os
# nomes dos pré-requisitos do subscript.
# Diferentemente do $@, sua expansão é de linha
# única, não repetindo o subscript a cada item da
# lista de strings.
# É uma boa prática circundar o wildcard *
# com a função "wildcard". 
# O uso de * não se limita apenas à um
# caractere coringa. Usar a função nos garante
# que o make entenderá isso.

thing_wrong := *.o 
# Se a declaração acima não encontrar algo pelo 
# que substituir, será armazenado na variável a
# string "*.o" puramente.
thing_right := $(wildcard *.o)
# Na declaração acima, caso nenhuma substituição 
# seja encontrada, a variável não será
# preenchida.


all: one two three four

# Falha pq thing_wrong é a string "*.o"
one:
	$(thing_wrong)

# Fica como *.o se não houver correspondência
two: *.o

#Funciona como o esperado (não fazer nada)
three: $(thing_right)

# Mesma coisa que o three, mas diretamente no 
# subscript
four: $(wildcard *.o)
