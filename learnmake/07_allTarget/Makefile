# Podemos aninhar diferentes alvos em all e como
# ele é o default, irá rodar sempre. Na verdade,
# o alvo default será o primeiro definido no
# makefile, mas fazemos dele o all por
# padronização.

requisites:=one two three

all: $(requisites)

one:
	touch one

two:
	touch two

three:
	touch three

clean:
	rm $(requisites)
