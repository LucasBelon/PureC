# Double colon rules são raramente usadas, mas
# podem vir a ser úteis. Permitem múltiplas
# regras (ou subscripts) serem associados a um
# mesmo alvo. 
all: bla all2

bla::
	echo "Isso será impresso na tela"

bla::
	echo "E isso também."

# Command Execution
# Cada comando é executado como que num subshell.
# Isso confere independência entre cada linha dos
# subscripts.

all2:
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
