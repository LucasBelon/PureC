bla: 
	cc bla.c -o bla
# bla eh nosso alvo.
# se nao colocarmos pra ele atualizar 
# a depender de bla.c entao nao vamos
# recompilar quando bla.c mudar
# Isso significa colocar bla.c como
# um pre requisito

bla: bla.c
	cc bla.c -o bla
# o que acontece é uma checagem nos 
# timestamps, para ver se bla.c é mais
# velho do que bla.
# Se sim, então bla.c mudou depois de ser
# usado pelo compilador.
# Se não, então bla é o binário gerado por
# bla.c
# Perceba que existem muitas falhas possiveis
# nesse esquema. Mas tentativas de melhorar
# poderiam fazer demorar ainda mais um 
# processo que geralmente já é demorado
# (imagine um projeto grande como o Kernel
# do Linux)
