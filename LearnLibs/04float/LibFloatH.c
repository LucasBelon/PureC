/* Arquivo que imprime as macros definidas
 * por float.h, neste ambiente de desenvolvimento
 * */

# include <stdio.h>
# include <float.h>

int main(void){
    printf(
        "RADIX: %d\n\
        \rDIGITS: %d\n\
        \rMAX: %f\n\
        \rEPSILON: %f\n\
        \rMAX EXP 10: %d\n\
        \rMIN EXP 10: %d\n\
        \rMANT DIG: %d\n\
        \rHAS SUBNORM: %d\n"
        , FLT_RADIX
        , FLT_DIG
        , FLT_MAX
        , FLT_EPSILON
        , FLT_MAX_10_EXP
        , FLT_MIN_10_EXP
        , FLT_MANT_DIG
        , FLT_HAS_SUBNORM);

    /*
    // Esse pedaco eh uma tentativa de se
    // encontrar quantos digitos tem de 
    // significancia num long double

    long double x = 1;
    char a=0;
    for(int i=0;1;i++){
        printf("i=%d:\n%.1075Lf\n",i, x);
        x /= 2;
        if (!(i%1075))
        scanf("%c",&a);
    }
    */
    return 0;
}
