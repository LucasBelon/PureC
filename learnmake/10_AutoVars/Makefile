# Vejamos algumas variáveis automáticas.

hey: one two
	# Mostra o nome do alvo
	echo $@
	
	# Mostra todos os pre-requisitos mais novos 
	# do que o alvo (os que serão executados).
	echo $?
	
	# Mostra todos os pré-requisitos
	echo $^
	touch $@
	
one:
	touch one
two:
	touch two

clean:
	rm -r one two hey

# Na página do manual do GNU makefile temos todas
# as variáveis automáticas. Foram anotados apenas
# os principais:
#
# $@ - Nome do alvo da regra.
# $% - Nome do membro do alvo, quando o alvo é um
# membro do arquivo. Se o alvo é foo.a(bar.o),
# então $@ é foo.a.
# $< - Nome do primeiro pré-requisito. 
# $? - O nome dos pré-requisitos que são mais
# recentes do que o alvo, com espaços entre eles.
# Se o alvo não existe, todos os pré-requisitos
# são adicionados. 
# $^ - Nome de todos os pré-requisitos separados
# por espaço.
# $+ - Semelhante a $^, mas pré-requisitos
# repetidos são duplicados na ordem em que são
# listados.
# $| - O nome de todos os pré-requisitos
# order-only.
# $* - Usado com regras implícitas. Não entendi
# como usa.
