/* Altere o programa do exemplo29.c de modo que o usuario
 * possa representar divisoes tambem com o dois pontos ( : ).
 * [Dica: Crie um caso sem o comando break correspondente]*/

# include <stdio.h>

int main(){
    float x, y;
    char op;

    printf("Escreva algo como 2 * 3:\n");
    scanf("%f %c %f", &x, &op, &y);

    switch(op){
        case ('+'):
            printf("Resultado =%f\n", x+y); 
            break ;
        case ('*'):
            printf("Resultado =%f\n", x*y); 
            break ;
        case ('-'):
            printf("Resultado =%f\n", x-y);
            break ;
        case (':'): //Assim o comando vaza e executa a instrucao
                    //de divisao com dois operandos diferentes
        case ('/'): 
            if(!y) \
                printf("Nao se divide por zero\n");
            else \
                printf("Resultado =%f\n", x/y); 
            break ;
        default: 
            printf("operador invalido: %c\n",op);
    }
    return 0;
}
