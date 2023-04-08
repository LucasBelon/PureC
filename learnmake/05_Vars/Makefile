files := file1 file2
# Parece que é assim que se define um conjunto de
# strings como uma variáveis. É um tanto
# estranho, mas eu também sou.


# Podemos usar expansão de variáveis para
# determinar que queremos como pre-requisitos as
# variáveis agrupadas em "files". Assim temos um
# código um tanto mais elegante.
somefile: $(files)
	cat file1 file2 > somefile

file1:
	echo "Texto do arquivo 1" > file1

file2:
	echo "Texto do arquivo 2" > file2

# E também simplifica na hora de limpar tudo. Com
# essa estrutura podemos deixar o processo de
# compilação genericamente escrito e apenas mudar
# um conjunto de variáveis, no cabeçalho, para
# alterar às necessidades nosso projeto.
clean:
	rm -f $(files) somefile
