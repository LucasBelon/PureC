/* Abrindo um arquivo para gravacao. */


# include <stdio.h>
# include <stdlib.h>
int main(){
    FILE *s;
    if ((s=fopen("saida.dat", "w")) == NULL){
        printf("Arquivo nao pode ser aberto\n");
        exit(1);
    }

    return 0 ;
}
/* Agora o codigo abre o arquivo para gravacao, ja
 * que foi usado o modo "w". Alem disso, como o teste
 * de erro eh sempre necessario, eh costume codificar
 * a operacao de abertura embutida diretamente dentro
 * do condicional.*/
