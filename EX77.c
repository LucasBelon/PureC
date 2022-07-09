/* Alem da adicao de ponteiros com inteiros, 
 * uma outra operacao possivel eh a subtracao 
 * entre ponteiros do mesmo tipo. Quando um 
 * ponteiro eh subtraido de outro, o resultado 
 * eh o numero de elementos existentes no espaco 
 * de memoria compreendido entre os enderecos 
 * apontados por eles.  Usando essa ideia, 
 * codifique a funcao strlen(s), que devolve 
 * o numero de caracteres existentes numa string s.*/


# include <stdio.h>

/* Funcao clone de strlen(s)*/
int altStrlen(const char* s)
{
    const char* t;
    // Nao entendo porque const char* sendo que t
    // pode ser incrementado e decrementado.
    t = s;
    while(*t) ++t;
    return (t-s);
}


int main(void){
    printf("%d\n",altStrlen("Lucas"));
    return 0 ;
}
