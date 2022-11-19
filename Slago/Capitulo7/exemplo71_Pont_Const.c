/* Exibindo ponteiros constantes.*/


# include <stdio.h>

int main(void){
    int v[2];
    // Cria um array para armazenar 2 int's
    printf("main=%p e v=%p\n",main, v);
    // Mostra na tela o endereço da funcao main
    // e o endereco da variavel v. %p de pointer.
    // nomes sao ponteiros fixos
    return 0 ;
}
