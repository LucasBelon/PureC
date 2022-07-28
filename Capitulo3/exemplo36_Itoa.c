/* Exibe a tabela ASCII com pausas a cada 23 linhas*/

# include <stdio.h>

int main(){
    int c, n = 0 ;
    for (c = 0; c<=255; ++c) {
        printf("%c ==> %d\n", c, c);
        n++;
        if (n==23){
            printf("Pressione uma tecla ...");
            n=0;
            getchar();
        }
    }
    return 0;
}
