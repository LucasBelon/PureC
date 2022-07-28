/* Dado um ano, informe se ele eh ou nao bissexto.
 * [Dica: um ano bissexto é divisivel por 4, mas
 * nao por 100, exceto os divisiveis por 400]*/

# include <stdio.h>

int main(){
    int ano;
    printf("Escreva um ano e direi se ele eh bissexto:\n");
    scanf("%d",&ano);
    if ((ano%4)==0 && (ano%100)!=0 || (ano%400)==0 ){
        printf("O ano %d eh bissexto", ano);
    }
    else{
        printf("O ano %d nao eh bissexto", ano);
    }


    return 0;
}
