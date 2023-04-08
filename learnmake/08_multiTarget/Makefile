# Podemos ter mais de um alvo na mesma instrução.
# Dessa forma, o make nos dá uma ferramenta para
# obter informações sobre o alvo do subscript.
# $@ é uma variavel automatica que contém
# o nome do alvo. Assim fazemos:

all: requisito_1 requisito_2

requisito_1 requisito_2:
	echo $@

# O subscript irá rodar uma vez para cada item na
# lista "$@". Com isso temos o comando echo
# acionado duas vezes no exemplo.
