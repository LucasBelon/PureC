/* Crie tipos de vetores para armazenar:
 * a) As letras vogais do alfabeto.
 * b) As temperaturas medias diarias de uma semana.
 * c) O numero de dias em cada um dos meses do ano.*/

# include <stdio.h>

int main(){
    //a)
    char vogais[5];
    vogais[0] = 'a';
    vogais[1] = 'e';
    vogais[2] = 'i';
    vogais[3] = 'o';
    vogais[4] = 'u';
    for (int i=0; i<5; ++i){
        putchar(vogais[i]);
    }
    putchar('\n');
    //b)
    float temperaturas[7];
    //c)
    int dias_mes[12];
    return 0;
}
