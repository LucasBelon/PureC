/* Baseando-se no programa do exemplo 7.23, explique
 * o que representa a expressao *((*p).nome).
 * Reescreva-a usando o operador ->.
 *
 * Resposta:
 * Como sabemos, (*p).nome eh a forma que se usa
 * para acessar o membro de uma estrutura. Podemos
 * simplificar para p->nome.
 * No entanto, 'nome' eh uma string. Quando temos 
 * a expressao *(String), sabemos que estamos
 * acessando o valor do primeiro elemento de uma 
 * lista de caracteres. Portanto, podemos reescrever
 * a expressao como (p->nome)[0], ou seja, o primeiro
 * caractere do nome. Podemos escrever tambem
 * p->nome[0] ou ainda *p->nome.*/


# include <stdio.h>

typedef struct {
    char nome[31];
    int idade;
} pessoa;

int main(void){
    pessoa *p, x = {"Silvio", 32};
    p = &x;
    printf("{%s,%d}\n", (*p).nome, (*p).idade);
    printf("%c\n", *((*p).nome));
    printf("%c\n", p->nome[0]);

    return 0 ;
}

