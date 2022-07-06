/* Simule a execução da função insercao(),
 * preenchendo uma tabela como aquela 
 * apresentada no exemplo 5.36, para 
 * ordenar a seqüência
 * {82, 50, 71, 63, 85, 43, 39, 97, 14}.  */

# include <stdio.h>
# define TAM 9


void insercao(int v[], int n) { 
    int i, j, x;
    puts("i v0 v1 v2 v3 v4 v5 v6 v7 v8");
    for(i=1; i<n; i++) { 
        x = v[i]; 
        for(j=i-1; j>=0 && x<v[j]; j--) 
            v[j+1] = v[j]; 
        v[j+1] = x;
        putchar('0'+i);
        for (int k=0;k<n;++k) printf(" %02d",v[k]);
        putchar('\n');
    }
}


int main(void){
    int L[TAM] = {82, 50, 71, 63, 85, 43, 39, 97, 14};
    insercao(L, TAM);
    return 0 ;
}
