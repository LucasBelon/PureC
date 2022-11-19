/* Dados a lista de convidades de uma festa e o nome
 * de uma pessoa, determinar se essa pessoa é ou não
 * convidada da festa. Codifique um programa completo
 * para resolver esse problema. Crie um procedimento
 * para fazer a entrada da lista de convidados e 
 * adapte a funcao pertence(), definida anteriormente
 * , para verificar se o nome consta ou nao da lista.
 * */


# include <stdio.h>
#include <string.h>


int pertence(x,L,n)
    char x[];
    int n;
    char L[n][9];
{
    int i=0;
    while(strcmp(x, L[i])!=0 && i<n){
        ++i;}
    if (i<n) return 1;
    else return 0;
}


int main(void){

    char Lista[][9]={
        "Joao",
        "Pedro",
        "Camila",
        "Andressa"
    };
    char Pessoa[]="Andress";

    printf("%s\n",(pertence(Pessoa, Lista, 4))?"Pertence":"Não Pertence");

    return 0 ;
}
