/* estudando o a saida formatada de texto
 * preenchimento com zeros a esquerda de
 * inteiros e numero de casas de floats*/

# include <stdio.h>

int main(){
    int a = 678;
    float b = 12.3456;

    printf("\n|%5d|",a);
    // Adicionamos o numero para espaco geral no campo.
    printf("\n|%06d|",a);
    // Adicionamos 06 para definir espaco de 6 caracteres, com zeros a esquerda.
    printf("\n|%7.3f|",b);
    // Especificamos o formato antes e apos a virgula
    printf("\n|%7.2f|",b);
    // Imprimimos uma nova linha no final do programa.
    printf("\n");
    return 0;
}
