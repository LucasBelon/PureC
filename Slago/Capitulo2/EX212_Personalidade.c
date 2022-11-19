/* O perfil de uma pessoa pode ser determinado a
 * partir da sua data de nascimento, conforme
 * exemplificado a seguir. Dada uma data de 
 * nascimento, informe o perfil correspondente.
 *
 * Exemplo: 13/06/1970
 *
 * 1: 1306 + 1970 = 3276
 * 2: 32 + 76 = 108
 * 108 / 5 = 21*5 + (3)
 * 3 (resto da divisao por 5) eh o
 * indicador do perfil
 *
 * +------------------+
 * | R |    Perfil    |
 * +------------------+
 * | 0 |    Timido    |
 * | 1 |   Sonhador   |
 * | 2 |  Paquerador  |
 * | 3 |   Atraente   |
 * | 4 | Irresistivel |
 * +---+--------------+
 * */


# include <stdio.h>

int main(){
    int dia, mes, ano, perfil;

    printf(
    "Escreva sua idade no formato DD MM AAAA\n"
    );
    scanf("%d %d %d",&dia, &mes, &ano);

    perfil = 100*dia + mes + ano;
    perfil = perfil/100 + perfil - (perfil/100)*100;
    perfil = perfil % 5;
    puts("Seu perfil eh ");
    switch(perfil){
        case 0:
            puts("timido\n");
            break;
        case 1:
            puts("sonhador\n");
            break;
        case 2:
            puts("paquerador\n");
            break;
        case 3:
            puts("atraente\n");
            break;
        case 4:
            puts("irresistivel\n");
            break;
    }
    return 0;
}
