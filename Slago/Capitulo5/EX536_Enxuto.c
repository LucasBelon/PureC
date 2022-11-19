/* Codifique a função selecao() sem usar a 
 * função selmin(), ou seja, embutindo a 
 * lógica dessa função diretamente no 
 * código da selecao().*/

#include <stdio.h>
#define TAM 9


void selecao(int v[], int n) {
    int k, x;
    for (int i = 0; i < n - 1; i++) {
        k = i;
        for(int j=i+1;j<n;++j) if (v[k]>v[j]) k=j;
        x = v[i];
        v[i] = v[k];
        v[k] = x;
  }
}


int main(void) {
    int L[TAM] = {82, 50, 71, 63, 85, 43, 39, 97, 14};
    selecao(L, TAM);
    for (int i = 0; i < TAM; ++i)
        printf("%d ", L[i]);
    putchar('\n');
    return 0;
}
