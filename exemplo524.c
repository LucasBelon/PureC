/* Busca linear num vetor de inteiros.*/


# include <stdio.h>

int pertence(int x, int L[], int n){
    int i;
    for(i = 0; i<n; ++i)
        if (x==L[i])
            return 1;
    return 0;
}

int main(void){
    int n = 10;
    int x = 5;
    int L[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    printf("%s\n", (pertence(x, L, n))?"Pertence":"Não Pertence");    
    return 0 ;
}
