# include "../headers/criaElementos.h"

// Em algum lugar preciso definir essas variáveis
char CANHAO = 'A';
char NAVE = 'V';
int quantidadeNaves_MAX = COLUNA_MAXIMA - 3;


void
criaElementos(int quantidadeNaves, char ** matriz){
    // Encontrar o centro do tabuleiro para posicionar
    // CANHAO. Coluna soma um por termos a borda.
    int index_x_nave = (COLUNA_MAXIMA + 1) / 2;
    int index_y_nave = LINHA_MAXIMA ;
    *( index_x_nave + *( index_y_nave + matriz)) = CANHAO;
    
    // Quantas fiadas de naves teremos:
    int fiadas_naves = (quantidadeNaves/2);
    int ind_col_naves;
    for(ind_col_naves = 0; ind_col_naves < fiadas_naves; ++ind_col_naves){
        *((ind_col_naves * 2)+1 + *(1 + matriz)) = NAVE;
        *((ind_col_naves * 2)+1 + *(2 + matriz)) = NAVE;
    }
    if (quantidadeNaves % 2 != 0){
        *((ind_col_naves * 2)+1 + *(1 + matriz)) = NAVE;
    }
}

int 
main(){
    char** matriz = criaBufferMatriz();
    iniciaCaractereMatriz(matriz);
    criaElementos(quantidadeNaves_MAX, matriz);
    imprimeMatriz(matriz);
    return 0;
}
