/* Defina um tipo de estrutura rotulada para 
 * representar números complexos da forma a+bi, 
 * sendo a a parte real e b a imaginária. Em 
 * seguida, crie uma função para calcular a soma 
 * de dois números complexos e codifique um 
 * programa para testar seu funcionamento. 
 * Use atribuição para inicializar os campos 
 * membros das variáveis.*/

// Estruturas sao passadas por valor, nao por referencia
// nao eh como um vetor.
// Simplifica definir estruturas como globais
// Posso definir funções como do tipo struct.
// Quando defino o tipo da funcao estou deixando
// um espaco, de tamanho especifico em memoria,
// para capturar o retorno da funcao. Por isso
// algumas funcoes sao void, sem espaco. Assim
// eu posso fazer "estru func(a,b,c)" ao inves de
// "int func(a,b,c)". E logo apos posso fazer
// "estru = func(a,b,c)"
// Caso nao fosse possivel seria necessario usar ponteiros.

# include <stdio.h>

typedef struct {
    float real;
    float imaginario; 
} COMPLEXO;


COMPLEXO soma_complexo(COMPLEXO num1,
        COMPLEXO num2)
{
    COMPLEXO resposta;
    resposta.real = num1.real + num2.real;
    resposta.imaginario = num1.imaginario + num2.imaginario;
    return resposta;
}


int main(void){
    COMPLEXO num1, num2, resposta;

    num1.real = 3;
    num2.real = 4;
    num1.imaginario = 1;
    num2.imaginario = 0;

    resposta = soma_complexo(num1, num2);

    printf("A soma eh %f+%fi\n",\
            resposta.real, resposta.imaginario);

    return 0 ;
}
