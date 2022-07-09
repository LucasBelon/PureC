/* Um vetor de ponteiros para inteiros.*/


# include <stdio.h>

int main(void){
    static int a = 10, b = 20, c = 30;
    static int* v[3] = {&a, &b, &c};
    // Vetor de ponteiros
    // Tentar entender por partes. Da direita pra esquerda:
    // v[3] nos diz que vamos separar espaço pra três elementos
    // num int v[3] seria espaço para três elementos int
    // Nesse caso separamos espaço para 3 ponteiros int.
    int i;
    for (i = 0; i<3; ++i) printf("%d ", *v[i]);

    return 0 ;
}
