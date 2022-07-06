/* Busca binaria num vetor de inteiros.*/


# include <stdio.h>

int pertence(int x, int L[], int n)
{
    int i, f, m;
    i = 0;
    f = n-1;
    while ( i<=f ){
        m = (i+f)/2;
        if ( x==L[m]) return 1;
        if ( x < L[m] ) f = m-1;
        else            f = m+1;
    }
    return 0;
}


int main(void){
    return 0 ;
}
