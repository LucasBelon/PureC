/*Exercício 7.10. Usando atof() − ASCII to float − implemente 
 * um programa com a sintaxe CALC <valor> <operador> <valor>, 
 * que receba uma expressão aritmética simples, calcula e 
 * exiba seu valor. */


# include <stdio.h>
# include <stdlib.h>

int main(int argc, char* argv[]){
    float valor1=atof(argv[1]), valor2=atof(argv[3]), resposta;
    switch(*argv[2]){
        case '+':
            resposta=valor1+valor2;
            printf("%f\n",resposta);
            break;
        case '-':
            resposta=valor1-valor2;
            printf("%f\n",resposta);
            break;
        case '/':
            resposta=valor1/valor2;
            printf("%f\n",resposta);
            break;
        case 'x':
            resposta=valor1*valor2;
            printf("%f\n",resposta);
            break;
        default: printf("Seu operador nao eh valido: %s",*(argv+2));
    }

    return 0 ;
}
