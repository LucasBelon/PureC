/* Seja 'e' uma variavel contendo o numero de erros
 * encontrados em um certo processo, codifique uma
 * instrucao capaz de exibir saidas como:
 * 1 erro detectado
 * 5 erros detectados*/

# include <stdio.h>

int main(){
    int n_de_erros = 0 ;

    printf("Numero de erros:\n");
    scanf("%d",&n_de_erros);

    printf("%d %s",
n_de_erros,n_de_erros !=1 ?
"erros detectados." :
"erro detectado."
    );

    return 0;
}
