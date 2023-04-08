# Aqui vemos como a expansão de strings funciona
# utilizando casos um tanto confusos.

# a é associado à string "one two"
a := one two
# b é associado à string "'one two'"
b := 'one two'

# Ativamos a execução do pré-requisito do alvo e
# em seguida expandimos as variáveis de forma que
# seu outut seja idêntico.
all: small
	printf '$a'
	printf $b


# mais um exemplo, agora sobre formas de expansão
# de variáveis.
x := dude
small:
	echo $(x)
	echo ${x}
	#bad practice but works
	echo $x
	# A diferença entre os comandos echo acima
	# está em quem irá expandir a variável, o
	# make ou o shell.
