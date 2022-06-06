/* Explique por que motivo a expressao
 * x = x*2 + y nao pode ser escrita como
 * x *= y + 2 
 * resposta:
 * Porque a expressao teria de ser reesceita como
 * x = x * (y+2)*/

# include <stdio.h>

int main(){
    float x, y;

    printf("Escreva valores de x e y:\n");
    scanf("%f %f", &x, &y);

    x = x*2 + y;
    printf("Para x = x*2 + y temos como resposta: %f\n",x);

    printf("Escreva valores de x e y:\n");
    scanf("%f %f", &x, &y);

    x *= y + 2;
    printf("Para x *= y + 2 temos como resposta: %f\n",x);
    return 0;
}
