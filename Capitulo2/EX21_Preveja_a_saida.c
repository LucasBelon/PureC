/* Qual a saida produzida pela instrucao a seguir
 * printf("%d %d %d %d"\ ,3+'a'>'b'+2 && !'b'
 * , 1 || !2 && 3 );  */

# include <stdio.h>

int main(){
    printf("%d %d %d %d\n"\
    ,!3, !0\
    /* Negacao para verdadeiro, negacao para falso
     * Falso, Verdadeiro*/

    ,3+'a'>'b'+2 && !'b'\
    /* 3+'a' eh maior que 2+'b' E nao b.
     * Falso E Falso = verdadeiro*/

    , 1 || !2 && 3 );

    /* Operadores logicos analisam da esquerda pra direita
     * para a mesma precedencia e && > ||
     * Verdadeiro OU Falso E Verdadeiro
     * Verdadeiro OU Falso*/


    return 0;
    
}
