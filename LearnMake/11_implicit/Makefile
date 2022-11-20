# o Make adora compilar C. Tanto que 
# existem abreviações para não precisarmos
# escrever quase nada. E é aí que mora a merda.
# Explicito é melhor do que implicito.

all: blah

# $^ nome de todos os pre requisitos
# $@ nome do alvos

#Compilando um programa C
Programa_C: lib01.o lib02.o
	$(CC) -c $(CPPFLAGS) $(CFLAGS) $^ -o $@


#Compilando um programa C++
Programa_CPP:
	$(CXX) -c $(CPPFLAGS) $(CXXFLAGS) $^ -o $@


#Fazendo o link de um arquivo objeto simples
Linkando.o:
	$(CC) $(LDFLAGS) $^ $(LOADLIBS) $(LDLIBS) -o $@ 

# Acima temos a forma explicita das regras 
# implicitas, as variaveis são:
# 
# CC: Compilador C padrão do sistema 
# (gcc ou clang). Padrão "cc"
# 
# CXX: Compilador C++. Padrão "g++"
#
# CFLAGS: Flags extras para o compilador C
# (por exemplo Wall para todos os warnings)
#
# CXXFLAGS: Flags extras para o compilador C++
#
# CPPFLAGS: Flags extras para o PreProcessador
# do compilador C
#
# LDFLAGS: Flags extras para quando o compilador
# deve invocar o linker (como o -m para a 
# biblioteca math)


# Agora vamos compilar implicitamente

CC = clang # Flag para regras implicitas
CFLAGS = -g # Ativa as informações de debug

# Regra implicita 1: blah é criado pela
# regra implicita do linker do compilador
#
# Regra implicita 2: blah.o é criado pela
# regra implicita do compilador C, simplesmente
# porque blah.c existe

blah: blah.o

blah.c:
	echo "int main(){return 0;} " > blah.c

clean:
	rm -f blah*


