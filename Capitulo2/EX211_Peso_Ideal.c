/* Dadas a altura e sexo de uma pessoa, determine seu
 * peso ideal de acordo com as formulas a seguir:
 *
 * Para homens o peso ideal eh 72.7*altura - 58
 * Para mulheres o peso ideal eh 62.1*altura - 44.7
 * */

# include <stdio.h>

int main(){
    char sexo;
    float altura;
    printf("Digite H para homem e M para mulher:\n");
    scanf("%c", &sexo);
    printf("Digite sua altura:\n");
    scanf("%f", &altura);

    switch(sexo){
        case 'M':
            printf(
            "Senhorita, seu peso ideal eh de %.2fKg",
            62.1*altura-44.7
            );
            break;
        case 'H':
            printf(
            "Senhor, seu peso ideal eh de %.2fKg",
            72.7*altura-58
            );
            break;
    }
    return 0;
}
