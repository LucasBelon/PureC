/* Com ponteiros, 1000+1 nao eh necessariamente 1001.*/


# include <stdio.h>
/* Quando fazemos (tipo *) 0x1000 estamos criando um
 * ponteiro constante que aponta para um endereço.
 * Dessa forma, todos os ponteiros apontam para o mesmo
 * endereço.*/
int main(void){
    char*        a = (char*)         0x1000;
    short int*   b = (short int*)    0x1000;
    float*       c = (float*)        0x1000;
    double*      d = (double*)       0x1000;
    printf("%p %p %p %p \n", a+1, b+1, c+1, d+1);
    return 0 ;
}
