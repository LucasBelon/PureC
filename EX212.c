/* */

# include <stdio.h>

int main(){
    int dia, mes, ano, perfil;

    printf("Escreva sua idade no formato DD MM AAAA\n");
    scanf("%d %d %d",&dia, &mes, &ano);
    perfil = 100*dia + mes + ano;
    perfil = perfil/100 + perfil - (perfil/100)*100;
    perfil = perfil % 5;
    switch(perfil){
        case 0:printf("Seu perfil eh timido\n");break;
        case 1:printf("Seu perfil eh sonhador\n");break;
        case 2:printf("Seu perfil eh paquerador\n");break;
        case 3:printf("Seu perfil eh atraente\n");break;
        case 4:printf("Seu perfil eh irresistivel\n");break;
    }
    return 0;
}
