/* Definindo campos de bits*/


# include <stdio.h>

typedef struct {
    unsigned    a : 1;
    signed      b : 3;
    unsigned    c : 3;
} amostra;

int main(void){
    amostra exemplo;
    exemplo.a = 1;
    printf("%d\n", exemplo.a);
    return 0 ;
}
