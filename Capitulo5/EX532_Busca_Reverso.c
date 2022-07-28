/* Faca as alteracoes necessarias para 
 * que o algoritmo de busca binaria 
 * funcione com vetores ordenados de 
 * forma decrescente.*/

# include <stdio.h>
# define TAM 18

int pertence(int x, int L[], int n)
{
    int i, f, m;
    i = 0;
    f = n-1;
    while ( i<=f ){
        m = (i+f)/2;
        if ( x==L[m]) return 1;
        if ( x > L[m] ) f = m-1;
        //mudou o comparador de menor para maior
        else            i = m+1;
    }
    return 0;
}


int main(void){
    int L[TAM] = {99, 95, 89, 84, 77, 72, 69, 68, 57, 53, 49, 41, 37, 33, 31, 27, 16, 10};

    printf("%s",(pertence(33, L, TAM))?"Pertence\n":"Nao Pertence\n");
    printf("%s",(pertence(50, L, TAM))?"Pertence\n":"Nao Pertence\n");
    printf("%s",(pertence(77, L, TAM))?"Pertence\n":"Nao Pertence\n");
    printf("%s",(pertence(90, L, TAM))?"Pertence\n":"Nao Pertence\n");
    printf("%s",(pertence(99, L, TAM))?"Pertence\n":"Nao Pertence\n");
    return 0 ;
}
