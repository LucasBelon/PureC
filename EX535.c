/* Simule a execucao da funcao selecao(), conforme no
 * exemplo 5.32, para ordenar a lista 
 * L={82, 50, 71, 63, 85, 43, 39, 97, 14}*/


# include <stdio.h>
# define TAM 9


int selmin(int v[], int i, int n) {
  int j, k = i;
  for (j = i + 1; j < n; j++)
    if (v[k] > v[j])
      k = j;
  return k;
}

void selecao(int v[], int n) {
  int i, k, x;
  for (i = 0; i < n - 1; i++) {
    k = selmin(v, i, n);
    x = v[i];
    v[i] = v[k];
    v[k] = x;
  }
}
int main(void){
    int L[TAM] = {82, 50, 71, 63, 85, 43, 39, 97, 14};
    selecao(L, TAM);
    for (int i=0; i<TAM; ++i) printf("%d ", L[i]);
    putchar('\n');
    return 0;
}
