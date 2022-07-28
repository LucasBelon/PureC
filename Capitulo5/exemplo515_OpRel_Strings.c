/* Problema com operadores relacionais */


# include <stdio.h>

int main(void){
    char x[]="um";
    char y[]="um";
    printf("%s == %s resulta em %s",x, y, (x == y)?"verdadeiro":"falso");
    // "Array comparision always evaluate as false"
    return 0 ;
}
