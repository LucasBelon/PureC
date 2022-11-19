/* Codifique um programa para ler uma
 * matriz quadrada de ordem n e exibir
 * apenas os elementos da diagonal
 * principal.*/


# include <stdio.h>


void ler_diag(matriz, tamanho)
    int tamanho;
    int matriz[tamanho][tamanho];
{
    for(int i=0; i<tamanho; ++i){
        printf( \
        "Matriz[%d][%d]=%d\n", \
        i, i, matriz[i][i]);
    }
}


int main(void){
    int Tam_Matriz=4;
    int Matriz[4][4]={
        {1,0,0,0},
        {0,2,0,0},
        {0,0,3,0},
        {0,0,0,4},
    };
    ler_diag(Matriz,Tam_Matriz);
    return 0 ;
}
