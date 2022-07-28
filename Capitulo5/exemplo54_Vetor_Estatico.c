/* Podemos inicializar um vetor estatico com a 
 * seguinte sintaxe.
 * Alguns compiladores não permitem a inicializacao
 * de vetores da classe auto.
 * Os valores sao armazenados a partir da posicao
 * zero, na ordem em que sao fornecidos.
 * Apenas valores constantes podem ser utilizados
 * neste tipo de inicializacao. Variaveis causarao
 * erro.*/


# include <stdio.h>

int main(void){
    static float moeda[5]={1.00, 0.50, 0.25, 0.10, 0.05};
    // Exemplo de erro:
    int x = 0;
    static int vetor[2] = {x, 3};
    return 0 ;
}
