/* Usando um ponteiro para funcao*/


# include <stdio.h>
# include <math.h>

int main(void){
    /* Criacao de um ponteiro capaz de apontar
     * uma funcao do tipo double, que recebe um
     * argumento do tipo double.*/
    double (*p)(double);

    p = sqrt;
    printf("%.1lf\n", p(25));
    return 0 ;
}
