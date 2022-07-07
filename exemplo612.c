/* Unioes sao tipos maleaveis. Um tipo mutante: */


# include <stdio.h>

typedef union {
    char a;
    int b;
    float c;
} mutante;


int main(void){
    mutante variavel;
    variavel.b = 0;
    variavel.c = 555555.9999999;
    variavel.a = 'a';
    printf("%c\n", variavel.a );
    printf("%d\n", variavel.b );
    printf("%f\n", variavel.c );
    // Todos os membros, seja a, b ou c, guardam
    // a variavel à sua maneira. Fica claro que
    // todos os membros se referem à um mesmo 
    // espaco de memoria quando fazemos:
    printf("%c\n", variavel.b );
    // utilizando o %c para a variavel do tipo int
    // temos como resposta a letra 'a'
    // Se brincarmos com as representacoes, podemos
    // perceber como exatamente a uniao se comporta
    // no momento de gravacao dos dados a nivel dos bits.
    return 0 ;
}
