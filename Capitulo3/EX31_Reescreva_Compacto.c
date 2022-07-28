/* Explique por que motivo a expressao
 * x = x*2 + y nao pode ser escrita como
 * x *= y + 2 
 * resposta:
 * Porque a expressao teria de ser reescrita como
 * x = x * (y+2)
 * */

# include <stdio.h>

int main(){
    float x, y, z, w;

    printf("Escreva valores de x e y:\n");
    scanf("%f %f", &x, &y);

    z = x;
    w = y;

    x = x*2 + y;
    printf(
    "Para x = x*2 + y temos como resposta: %f\n",
    x);

    z *= w + 2;
    printf(
    "Para x *= y + 2 temos como resposta: %f\n",
    z);
    return 0;
}
