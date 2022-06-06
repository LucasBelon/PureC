/* estudando o a saida formatada de texto
 * preenchimento com zeros a esquerda de
 * inteiros e numero de casas de floats*/

# include <stdio.h>

int main(){
    int a = 678;
    float b = 12.3456;

    printf("\n|%5d|",a);
    printf("\n|%06d|",a);
    printf("\n|%7.3f|",b);
    printf("\n|%7.2f|",b);
    printf("\n");
    return 0;
    
}
