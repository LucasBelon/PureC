/* Adapte a função trocas() de modo que o vetor seja ordenado 
de forma decrescente.*/

# include <stdio.h>
# define TAM 9

void trocas(int v[], int n) {
  int i, j;
  for (i = 1; i < n; i++)
    for (j = 0; j < n - i; j++)
      if (v[j] < v[j + 1]) {
        int x = v[j];
        v[j] = v[j + 1];
        v[j + 1] = x;
      }
}


int main(){
    int L[TAM] ={14, 27, 39, 41, 55, 63, 71, 80, 92};
    
    for (int i=0; i< TAM;++i) printf("%d ", L[i]);
    putchar('\n');
    
    trocas(L, TAM);
    
    for (int i=0; i< TAM;++i) printf("%d ", L[i]);
    putchar('\n');

    return 0 ;
}
