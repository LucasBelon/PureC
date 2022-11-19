/* Explique o significado de cada ocorrência 
 * de ∗ no fragmento de código a seguir e 
 * indique qual a saída exibida na tela.*/


# include <stdio.h>

/* Rotina main corrigida.*/
int main2(void);

int main(void){
    main2();// Executando versao alternativa antes de crashear.
    int *p, x=5; 
    // ponteiro int declarado.
    *p *= 2**p; // Esse comando crasheia o programa.
    // valor que p aponta eh multiplicado por
    // (2 x valor que p aponta). Nao se sabe o valor
    // de p
    printf("%d\n", x); 
    // Mostra na tela o valor 5
    return 0 ;
}

int main2(void)
    /* Consertando o codigo acima*/
{
    int *p, x[]={5}; 
    p = x;
    *p *= 2 **p; 
    printf("%d\n", *x); 
    return 0 ;
}
