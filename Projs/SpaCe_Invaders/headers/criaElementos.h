# ifndef criaElementos_H
# define criaElementos_H

# include "initial_definitions.h"

/*int, (matriz) -> None
Recebe um inteiro com a quantidade de naves a serem criadas
e a matriz de caracteres vazia para colocar os elementos no início do
jogo: o canhão do jogador na linha de baixo e na coluna do meio e as
naves na parte superior. As naves devem sempre ficar em pares (um em
cima do outro) e separados pelos outros pares por uma coluna vazia.*/
void
criaElementos(int quantidadeNaves, char ** matriz);
# endif // !criaElementos_H
