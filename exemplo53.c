/* Exemplo de uso inadequado de indices
 * No compilador LLVM ha segurança contra overflow
 * de indices de vetores*/

# include <stdio.h>

int main(void){
    int x[3], y[4];
    x[2] = y[0] = 1;
    x[3] = 2; //sobrepoe y[0]
    y[-1] = 3; //sobrepoe x[2]
    printf("%d %d\n", x[2], y[0]);
    return 0;
}
