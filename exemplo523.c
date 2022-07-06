/* Preenchendo um labirinto TAMxTAM
 * com valores lidos do teclado*/

#include <stdio.h>
# define TAM 3
void preenche(int L[TAM][TAM]) {
  int i, j;
  for (i = 0; i < TAM; i++)
    for (j = 0; j < TAM; j++) {
      printf("[%d][%d]= ", i, j);
      scanf("%d", &L[i][j]);
    }
}

int main(void) {
    int L[TAM][TAM];
    preenche(L);
    for (int i=0; i<TAM; ++i){
        for (int j=0; j<TAM; ++j){
            printf("%d ",L[i][j]);
        }
        putchar('\n');
    }
    return 0; 
}
