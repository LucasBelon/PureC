/* Usando passagem por referencia.*/


# include <stdio.h>

/* Funcao que permuta variavel p por q.
 * Usando passagem por referencia.*/
void permutacao(int * p, int * q)
{
    int temp;
    temp = *p;
    *p = *q;
    *q = temp;
}


int main(void){
    int a=3, b=7;
    permutacao(&a,&b);
    printf(\
"Resultado esperado:\n\
a = 7, b = 3;\n\
Resultado obtido:\n\
a = %d, b = %d;\n",
a,b);
    return 0 ;
}
