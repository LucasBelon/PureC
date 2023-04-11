# Pattern rules são úteis, mas também muitas vezes
# confusas. Pode-se interpreta-las de duas formas
# - Uma forma de criar suas próprias regras
#   implícitas.
# - Uma forma mais simples das Static Pattern
#   Rules.
#
# Partindo de um exemplo:
#
# Definimos um static pattern para compilar todos
# os arquivos .c em .o
%.o: %.c
	$(CC) -c $(CFLAGS) $(CPPFLAGS) $< -o $@

# Outro exemplo:

# Define um pattern rule sem padrão em seus
# pré-requisitos. O exemplo abaixo apenas cria um
# arquivo .c vazio quando necessário.
%.c:
	touch $@
