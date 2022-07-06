/* Ordenação por trocas (BubbleSort). */

# include <stdio.h>


void trocas(int v[], int n) {
  int i, j;
  for (i = 1; i < n; i++)
    for (j = 0; j < n - i; j++)
      if (v[j] > v[j + 1]) {
        int x = v[j];
        v[j] = v[j + 1];
        v[j + 1] = x;
      }
}


int main(){

    return 0 ;
}
