/* Eliminando a redundancia atraves de polimorfismo*/

int menor(int x, int y) { return x>y;}
int maior(int x, int y) { return x<y;}

int minmax(int v[], int n, int (*cmp)(int,int))
{
    int i, x=v[0];
    for(i=1; i<n; i++)
        if (cmp(x,v[i]))
            x = v[i];
    return x;
}


# include <stdio.h>

int main(void){
    int vetor[4] = {6, 4, 3, 7};
    int n =4;
    printf(  "O maximo eh %d\n\
            \rE o minimo eh %d", 
            minmax(vetor, n, maior),
            minmax(vetor, n, menor)
            );

    return 0 ;
}
/* Criamos a funcao minmax() cujo terceiro parametro
 * eh um ponteiro para uma funcao do tipo int, que
 * recebe dois argumentos tambem do tipo int.
 * Esse parametro ponteiro de funcao nos permite
 * encontrar, com a mesma funcao minmax(), tanto
 * o maximo quanto o minimo elemento do vetor.*/
