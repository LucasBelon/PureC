/* A redundancia de codigo entre duas funcoes
 * com grande parte de seu corpo identico.*/

/* Funcao obtem menor valor lista de inteiros.*/
int min(int v[], int n)
{
    int i, x=v[0];
    for(i=1; i<n; i++)
        if (x>v[i])
            x = v[i];
    return x;
}

/* Funcao obtem maior valor lista de inteiros.*/
int max(int v[], int n)
{
    int i, x=v[0];
    for(i=1; i<n; i++)
        if (x<v[i])
            x = v[i];
    return x;
}


# include <stdio.h>

int main(void){
    int vetor[4] = {6, 4, 3, 7};
    int n =4;
    printf("O maximo eh %d e o minimo %d", 
            max(vetor, n), min(vetor, n));

    return 0 ;
}
