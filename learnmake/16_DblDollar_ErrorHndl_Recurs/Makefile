# Double Dollar Sign
# Se deseja-se usar o sinal do dólar, basta usar
# $$. Isso tem a ver com as variáveis de shell do
# sh e do bash. Vejamos como isso impacta no uso
# de variáveis do make e do shell.

make_var = I am a make variable
all:
	# O mesmo que rodar "sh_var='I am a shell
	# variable'; echo $$sh_var" no shell
	# diretamente.
	sh_var = 'I am a shell variable'; \
			 echo $$sh_var

	# O mesmo que rodar "echo I am a make
	# variable" no shell
	echo $(make_var)

# Manejo de Erros com -k, -i e -
# Utiliza-se a flag -k quando deseja-se que o
# make continue rodando mesmo após um erro ser
# encontrado. É útil se deseja ver todos os erros
# do make de uma vez.
# Adicione um - antes do comando para suprimir o
# erro.
# Adicione -i para o make fazer isso para cada
# comando

one:
	# Este erro será printado, mas será ignorado
	# e o make continuará executando.
	-false
	touch one

# Uso recursivo do Make
# Para chamar recursivamente um makefile, use o
# $(MAKE) ao invés de MAKE

new_contents = "hello:\n\ttouch inside_file"
nope:
	mkdir -p subdir
	printf $(new_contents) | sed -e 's/^//' \
		> subdir/makefile
	cd subdir && $(MAKE)
clean:
	rm -rf subdir
