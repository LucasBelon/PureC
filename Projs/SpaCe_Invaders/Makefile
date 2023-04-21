# Template de makefile para uso em projetos 
# futuros.
#
# A fazer:
# - incluir opção de debug e outros tipos de
#   otimização
# - incluir opções para as flags
#   E anotar os efeitos de cada uma


# Variáveis e configurações rápidas:
#
# Compilador C
CC := gcc # gcc # default: "cc"

# Talvez eu inclua mais tarde uma opção
# para compilar e usar com o DBG.
OPTIMIZATION := #\
				Não sei o que adicionar\
				ainda\
				mas é do tipo -O2\
				Não confundir com -02

# Flags do Compilador C
CFLAGS := -g -Wall

# Flags de link de bibliotecas (ou lib dinâmicas)
LDFLAGS := #\
		  -lm \
		  -lcurses

# Flags do Pré-Processador (manipulador de macros)
CPPFLAGS :=

# Diretório de binários
BIN := bin
# Nome do executável final
OUTPUT := $(BIN)/main

# Nome dos arquivos fonte
SRC := src
# Arquivos Fonte
ARQUIVOS_FONTE = $(wildcard $(SRC)/*.c)

OBJ := obj
# Nome dos arquivos objeto
ARQUIVOS_OBJETO := $(patsubst $(SRC)/%.c, $(OBJ)/%.o, $(ARQUIVOS_FONTE))

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
all:$(OUTPUT)

$(OUTPUT): $(ARQUIVOS_OBJETO)
	# Compilação final, linker de objetos e
	# bibliotecas.
	$(CC) $(CFLAGS) $(CPPFLAGS) $(LDFLAGS)\
		$(ARQUIVOS_OBJETO) -o $@

$(OBJ)/%.o: $(SRC)/%.c
	# Compilação dos códigos fonte em 
	# arquivos objeto.
	$(CC) $(CFLAGS) $(CPPFLAGS) -c $< -o $@


install_dependencies:
	# Como descobrir o gerenciador de pacotes
	# de uma distro? Como instalar sem
	# gerenciador?
	$(PKG_MANAGER) install $(dependency_libs)

# Limpador de arquivos objeto e executáveis
clean: bin obj
	rm -f $(wildcard bin/*)
	rm -f $(wildcard obj/*.o)

exe: $(OUTPUT)
	./$(OUTPUT)

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
