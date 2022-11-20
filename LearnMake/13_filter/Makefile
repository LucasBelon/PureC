# Filter é usado para manipular funçoes
# ainda não sabemos sobre funcoes
# Mas podemos usar com static pattern rules
# para garantir que usamos os arquivos 
# que queremos

obj_files = foo.result bar.o lose.o
src_files = foo.raw bar.c lose.c

all: $(obj_files)
# Note: .PHONY é importante aqui para impedir
# as regras implicitas
.PHONY: all

# Ex1: Arquivos .o dependem dos .c
# Apesar de não fazermos os arquivos .o
$(filter %.o,$(obj_files)): %.o: %.c
	echo "target: $@ prereq: $<"

# Ex2: Arquivos .result dependem de .raw
# Apesar de não fazermos os arquivos .result
$(filter %.result,$(obj_files)): %.result: %.raw
	echo "target: $@ prereq: $<"

%.c %.raw:
	touch $@

clean:
	rm -f $(src_files)

