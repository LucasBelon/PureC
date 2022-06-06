/* Dadosdois numeros naturais m e n,
 * exiba um retangulo com m caracteres de altura
 * e n caracteres de largura*/

# include <stdio.h>

# define CARACTERE '#'

int main(){
    int m, n, contAltura, contLargura;
    printf("Digite a altura e a largura:\n");
    scanf("%d %d", &m, &n);

    for (contAltura=1; contAltura<=m; ++contAltura){
        for (contLargura=1 ; contLargura<=n ; ++contLargura ){
            printf("%c",CARACTERE);
        }
        printf("\n");
    }

    return 0;
}
