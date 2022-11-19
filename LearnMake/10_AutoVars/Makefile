hey: one two
	#mostra o nome do alvo
	echo $@
	
	#Mostra todos os pre-requisitos
	#mais novos do que o alvo
	#(os que serão executados)
	echo $?
	
	#Mostra todos os pré-requisitos
	echo $^
	touch hey
	
one:
	touch one
two:
	touch two

clean:
	rm -r one two hey
