/* Arquivo com exemplos de usos das macros
 * existenres em float.h
 * Basicamente se mostra como são tratados os
 * casos mais simples de erros provenientes
 * do uso de numeros de ponto flutuante.*/

# include <stdio.h>
# include <float.h>
# include <math.h>

// # define FLT_RADIX 10

int main(void){

    /* --------------------------------------
     * Tratamento de Overflow quando não se 
     * sabe se o resultado final será positivo
     * ou negativo.
     * --------------------------------------*/
    double x = -2;

    while ( DBL_MAX > fabs(x)*2 )
        x *= -2;

    printf("x double limite:\n%lf\n",x);
    /* Se multiplicarmos por 2 mais uma vez
     * teremos 'inf' como resultado.
     * alterando fabsf(x)*2 para fabsf(x) */
    
    /* --------------------------------------
     * Exemplo com e^x, Overflow
     * --------------------------------------*/
    int y = 1;
    double log_dbl = log(DBL_MAX);
    
    while( ++y < log_dbl-1);
    printf("y limite:%d\n\
            \rexp limite: \n\
            \r%lf\n",
            y, exp(y));
    /* Armazenei log(dblmax) para evitar ficar
     * recalculando o tempo todo. Não fez grande
     * diferença. C é rápido mesmo*/

    /* --------------------------------------
     * Exemplo com 10^x, Overflow
     * --------------------------------------*/
    int z = 1;
    
    while( ++z < DBL_MAX_10_EXP );
    
    printf("Maxima potencia:\n%lf\n\
          \rMaximo expoente: %d\n",
          pow(10,z), z );
    /* Mudar radix não mudou 10^x.*/

    int w = 1;
    while (++w < FLT_MAX_EXP);
    --w;
    printf("FLT_MAX_EXP: %lf\n",ldexpf(1.0, w));

    return 0;
}
