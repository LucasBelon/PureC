/* Dadosdois numeros naturais m e n,
 * exiba um retangulo com m caracteres de altura
 * e n caracteres de largura*/

# include <stdio.h>

# define CARACTERE '#'

int main(){
    int m, n, Altura, Largura;
    printf("Digite a altura e a largura:\n");
    scanf("%d %d", &m, &n);

    for (Altura=1; Altura<=m; ++Altura){
        for (Largura=1 ; Largura<=n ; ++Largura ){
            printf("%c",CARACTERE);
        }
        printf("\n");
    }

    return 0;
}
