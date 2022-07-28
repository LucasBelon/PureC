/* Simule o funcionamento do algoritmo de
 * busca binaria para determinar se os itens
 * 33, 50, 77, 90 e 99 constam da lista
 * L={10, 16, 27, 31, 33, 37, 41, 49, 53, 57, 68, 69, 72, 77, 84, 89, 95, 99}*/


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
        if ( x < L[m] ) f = m-1;
        else            i = m+1;
    }
    return 0;
}


int main(void){
    int L[TAM] = {10, 16, 27, 31, 33, 37, 41, 49, 53, 57, 68, 69, 72, 77, 84, 89, 95, 99};

    printf("%s",(pertence(33, L, TAM))?"Pertence\n":"Nao Pertence\n");
    printf("%s",(pertence(50, L, TAM))?"Pertence\n":"Nao Pertence\n");
    printf("%s",(pertence(77, L, TAM))?"Pertence\n":"Nao Pertence\n");
    printf("%s",(pertence(90, L, TAM))?"Pertence\n":"Nao Pertence\n");
    printf("%s",(pertence(99, L, TAM))?"Pertence\n":"Nao Pertence\n");
    return 0 ;
}
