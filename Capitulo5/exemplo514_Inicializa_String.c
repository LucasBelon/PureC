/* Problema com inicializacao padrao de string */

# include <stdio.h>

int main(void){
    char x[] = "Um";                // Inclui o '\0'
    char y[] = {'D','o','i','s'};   // Nao inclui o '/0'
    printf("%s %s", x, y);
    return 0 ;
}
