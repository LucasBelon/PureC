/* Lendo dados com a funcao scanf().*/


# include <stdio.h>

int main(){
    int idade;
    char sexo;

    printf(\
"Informe, respectivamente, a idade\
e o sexo:");
    scanf("%d %c", &idade, &sexo);

    return 0 ;
}
