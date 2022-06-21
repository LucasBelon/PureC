/* O nome de um vetor representa o endereco em que ele esta alocado 
 * na memoria. Entao, se for desejado saber o endereco de um vetor 
 * v, em vez de escrever &v[0], podemos escrever simplesmente v*/


# include <stdio.h>

int main(void){
    int x[3], y[4] ;
    printf("x = %p e y = %p\n", x, y);
    return 0 ;
}
/* O formato %p é usado em C para exibir enderecos.*/
