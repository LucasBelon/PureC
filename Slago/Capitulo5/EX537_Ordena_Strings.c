/* Adapte a função selecao() para 
 * ordenar um vetor de strings.*/

#include <stdio.h>
#include <string.h>
#define TAM 9


void selecao(char v[][25], int n) {
    int k=0,j;
    char x[25];
    for (int i = 0; i < n - 1; i++) {
        k = i;
        for(int j=i+1;j<n;++j) if(strlen(v[k])>strlen(v[j])){
            k=j;
        }
        strcpy(x, v[i]);
        strcpy(v[i],v[k]);
        strcpy(v[k], x);
    }
}


int main(void) {
    char L[TAM][25] = {
        "abacate",
        "truta", 
        "ovo", 
        "cuia",
        "colher", 
        "saleiro",
        "escumadeira",
        "tompero", 
        "sabor"
    };
    selecao(L, TAM);
    for (int i = 0; i < TAM; ++i)
        printf("%s\n", L[i]);
    putchar('\n');
    return 0;
}
