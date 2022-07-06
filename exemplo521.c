/* Inicializacao de matrizes
 * inicializando e exibindo um labirinto*/

#include <stdio.h>

int main(void) {
  static int lab[10][10] = {
      {1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
      {0, 0, 1, 0, 0, 0, 1, 0, 1, 1},
      {1, 0, 1, 0, 1, 0, 1, 0, 1, 1},
      {1, 0, 1, 0, 1, 0, 0, 0, 0, 1},
      {1, 0, 1, 1, 1, 0, 1, 1, 0, 1},
      {1, 0, 0, 0, 0, 0, 1, 0, 1, 1},
      {1, 0, 1, 0, 0, 1, 1, 0, 1, 1},
      {1, 0, 0, 1, 0, 1, 0, 0, 0, 1},
      {1, 0, 1, 1, 0, 0, 0, 1, 0, 0},
      {1, 1, 1, 1, 1, 1, 1, 1, 1, 1}};
  int i, j;
  for (i = 0; i < 10; i++) {
    putchar('\n');
    for (j = 0; j < 10; j++)
      putchar(lab[i][j] ? '#' : 32);
  }
  return 0;
}
