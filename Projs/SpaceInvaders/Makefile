# Template de makefile para uso em projetos 
# futuros.
#
# A fazer:
# - opção para uso com C e com C++ (all)
# - opção para compilar em bibliotecas (shared)
# - incluir opção de debug e outros tipos de
#   otimização
# - incluir opções para as flags


# Variáveis e configurações rápidas:
#
# Compilador C
CC := clang # gcc # default: "cc"

# Talvez eu inclua mais tarde uma opção
# para compilar e usar com o DBG.
OPTIMIZATION := #\
				Não sei o que adicionar\
				ainda\
				mas é do tipo -O2\
				Não confundir com -02

# Compilador C++
CXX := clang # default: g++

# Flags do Compilador C
CFLAGS := -g -Wall

# Flags do Compilador C++
CXXFLAGS := -Wall

# Flags de link de bibliotecas (ou lib dinâmicas)
LDFLAGS := #\
		  -lm \
		  -lcurses

# Flags do Pré-Processador (manipulador de macros)
CPPFLAGS :=

# Nome do executável final
OUTPUT := bin/Programa

# Nome dos arquivos fonte
# Versão curta
SRC := $(wildcard src/*.c)

# Nome dos arquivos objeto
# Versão curta
ARQUIVOS_OBJETO := $(wildcard obj/*.o)

# Requisitos do alvo all
ALL_REQUISITOS := Compile_to_obj $(SRC)

# Bibliotecas não padrão que precisam ser
# instaladas. Apenas um exemplo, favor não
# executar sem saber do que se trata
DEPENDENCY_LIBS := ncurses
# Gerenciador de pacotes que irá executar
# a instalação
PKG_MANAGER := sudo apt


# VERIFICAR A NECESSIDADE DE USAR LDFLAGS

# Targets (Gosto de chamar de subscripts)
# (Talvez seria melhor entender como
# subscripts encadeados)
all: $(ARQUIVOS_OBJETO)
	# Compilação final, linker de objetos e
	# bibliotecas.
	$(CC) $(CFLAGS) $(CPPFLAGS) $(LDFLAGS)\
		$(ARQUIVOS_OBJETO) -o $(OUTPUT)

obj/%.o: src/%.c
	# Compilação dos códigos fonte em 
	# arquivos objeto.
	$(CC) $(CFLAGS) $(CPPFLAGS) -c $< -o $@


install_dependencies:
	# Como descobrir o gerenciador de pacotes
	# de uma distro? Como instalar sem
	# gerenciador?
	$(pkg_manager) install $(dependency_libs)




# Limpador de arquivos objeto e executáveis
clean: bin obj
	rm -f $(wildcard bin/*)
	rm -f $(wildcard obj/*.o)

# STARTER DE DIRETÓRIOS DE PROJETO VAZIOS.
project_start:
	mkdir -p \
		bin \
		doc/html \
		doc/latex \
		src/test \
		obj \
		lib \
		headers;
	touch \
		BUGS \
		Changelog \
		COPYING \
		README.md \
		TODO.txt


# Variáveis automáticas:
#
# $@ - Nome do alvo da regra. Expansão faz
# subscript ser repetido.
#
# $% - Nome do membro do alvo, quando o alvo é um
# membro do arquivo. Se o alvo é foo.a(bar.o),
# então $@ é foo.a.
#
# $< - Nome do primeiro pré-requisito.
#
# $? - O nome dos pré-requisitos que são mais
# recentes do que o alvo, com espaços entre eles.
# Se o alvo não existe, todos os pré-requisitos
# são adicionados. Expansão de linha
#
# $^ - Nome de todos os pré-requisitos separados
#
# $+ - Semelhante a $^, mas pré-requisitos
# repetidos são duplicados na ordem em que são
# listados.
#
# $| - O nome de todos os pré-requisitos
# order-only.
#
# $* - Usado com regras implícitas. Não entendi
# como usa.
