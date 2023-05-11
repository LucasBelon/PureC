/* */

# include <stdio.h>
# include <stdlib.h>
# include "generic_functions.h"

int main(void){
    // Definindo o tamanho da array (interpretada como matriz)
    prefix_array controle_array = {
        .n_colunas = 3,
        .n_linhas = 3,
    };

    // Simplificando a vida um pouquinho
    int tamanho = controle_array.n_linhas * controle_array.n_colunas;
    
    // Alocando memória pra array
    controle_array.array = malloc(
            sizeof(generic_Type) * tamanho
            );

    // Populando e printando os elementos da array num loop só
    for(int i=0; i<tamanho; ++i){
        *(controle_array.array+i) = i;

        printf("%f ", *(controle_array.array+i));

        if(i%controle_array.n_colunas == controle_array.n_colunas-1)
            putchar('\n');
    }

    return 0;
}
