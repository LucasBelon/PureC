/* A necessidade da passagem por referencia.*/


# include <stdio.h>

/* Funcao que permuta variavel p por q.
 * Usando passagem por valor*/
void permutacao(int p, int q)
{
    int temp;
    temp = p;
    p = q;
    q = temp;
}


int main(void){
    int a=3, b=7;
    permutacao(a,b);
    printf(\
"Resultado esperado:\n\
a = 7, b = 3;\n\
Resultado obtido:\n\
a = %d, b = %d;\n",
a,b);
    /* Como permutacao cria uma cópia dos valores
     * nao estamos alterando as variaveis inicializadas
     * dentro de main, e sim alterando a copia. Quando
     * saimos da funcao permutacao o escopo muda, e usamos
     * a versao original das variaveis, nao suas copias.*/
    return 0 ;
}
