/* Codifique a funcao definida a seguir:
 *
 * posicao(x, L) = 
 * {i se existe i tal que x=L[i];
 *  -1 caso contrário           }*/

#include <stdio.h>


int posicao(int x, int L[], int n) {
  int i;
  for (i = 0; i < n; ++i)
    if (x == L[i])
      return i;
  return -1;
}


int main(void) {
    return 0;
}
