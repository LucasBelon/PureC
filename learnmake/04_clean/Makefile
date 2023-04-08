# Uma das funcionalidades mais interessantes do
# makefile é criar espécies de miniscripts que
# podem ser chamados individualmente. Posso
# chamar "make clean" e eliminar os arquivos
# intermediários do processo de compilação do
# programa. 
some_file: other_file
	touch some_file

other_file:
	touch other_file

clean:
	rm -f some_file other_file
