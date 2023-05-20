# include "../headers/joga.h"
# include "../headers/initial_definitions.h"

int main(){
    srand(SEMENTE);

    printf("Digite o numero de naves (inteiro maior que 1 e menor que %d): ", COLUNA_MAXIMA);
    fflush(NULL);
    int quantidadeNaves;
    scanf(" %d",&quantidadeNaves);

    /* Teste com a quantidade máxima de naves disponível
     * int quantidadeNaves_MAX = COLUNA_MAXIMA - 3;
     * return_Joga resultado = joga(quantidadeNaves_MAX);
    */
    return_Joga resultado = joga(quantidadeNaves);

    if (resultado.resultado == VENCEU)
        printf(">>> CONGRATULATIONS! Você venceu!\n");
    else
        printf(">>> GAME OVER! Você perdeu!\n");

    printf(">>> Pontuação: %d\n", resultado.pontuacao);

    return 0;
}
