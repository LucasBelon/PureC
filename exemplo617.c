/* Overflow e Underflow.*/


# include <stdio.h>

typedef struct {
    unsigned    a : 1;
    signed      b : 3;
    unsigned    c : 3;
} amostra;

int main(void){
    static amostra x = {0, -4, 7};
    printf("%d %d %d\n", ++x.a, --x.b, ++x.c);
    return 0 ;
}
