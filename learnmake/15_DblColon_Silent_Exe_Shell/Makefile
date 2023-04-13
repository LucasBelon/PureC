# Double colon rules são raramente usadas, mas
# podem vir a ser úteis. Permitem múltiplas
# regras (ou subscripts) serem associados a um
# mesmo alvo. 
all: bla all2 all3

bla::
	echo "Isso será impresso na tela"

bla::
	echo "E isso também."

# Command Echoing/Silencing
# Adicionar um @ antes de um comando impede-o de
# ser impresso no terminal. Também é possível
# rodar make com -s para saída silenciosa.

all2:
	@echo "Essa linha não será impressa"
	echo "Mas essa linha vai"
# Command Execution
#
# Cada comando é executado como que num subshell.
# Isso confere independência entre cada linha dos
# subscripts.

all3:
	cd ..
	# O comando acima não afeta o abaixo, por
	# efetivamente rodarem em um shell novo.
	echo `pwd`

	# Este comando afeta o seguinte por serem
	# chamados na mesma linha.
	cd ..;echo `pwd`

	# O mesmo que acima, mas com sintaxe de
	# continuação de linha.
	cd ..; \
	echo `pwd`

# Shell Padrão
# O shell padrão costuma ser /bin/sh. Você pode
# alterar este comportamento com a variável
# SHELL.
SHELL=/bin/bash

cool:
	echo "Hello from bash"

