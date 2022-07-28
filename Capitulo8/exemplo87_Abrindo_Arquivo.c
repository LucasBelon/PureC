/* Abrindo um arquivo para leitura.*/


# include <stdio.h>
# include <stdlib.h>

int main(){
    FILE *e;
    
    e = fopen("entrada.arq","r");
    if (e == NULL ){
        printf("Arquivo nao pode ser aberto\n");
        exit(1);
    }

    return 0 ;
}
/* Esse codigo abre o arquivo entrada.dat para
 * leitura, conforme indicado pelo modo "r" utilizado
 * Note que, para garantir que nenhum erro ocorreu e
 * que o arquivo foi realmente aberto, o valor 
 * devolvido por fopen() eh testado.*/
