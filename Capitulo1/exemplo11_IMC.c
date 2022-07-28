/* Este programa foi compilado com
 * cc % -lm
 * e eu nao sei o que essas flags significam
 *
 * Agora eu sei:
 * -l é para link. M é para ligar à uma biblioteca especifica, no caso, 
 *  a biblioteca que contem math.h, que se nao me engano eh a stdlib. 
 *  Algo assim, mas talvez nao exatamente assim.*/

# include <stdio.h>
// Incluindo bibliotecas que manipulam i/o, como colocar mensagens no terminal.
# include <math.h>
// Incluindo biblioteca com funcoes matematicas, como potencia (pow).

# define LIMITE 30
// Definindo uma Macro. Onde for escrito "LIMITE" sera substituido na compilacao
// pelo numero 30. Nao existe typechecking com macros, entao precisa-se tomar cuidado.


int main(){
    float peso, altura, imc;
    // Todas as variaveis sao do tipo float, com ponto flutuante. Uma alternativa
    // eh usar o tipo double, para precisao dupla.
    printf("\nQual o seu peso e altura?\n");
    // Usamos a funcao de impressao formatada (printf), e os caracteres de novalinha \n
    // para perguntar qual sera o peso e altura usados no programa.

    scanf("%f %f",&peso, &altura );
    // Fazemos um scaneamento formatado de dois numeros float, essa funcao eh muito esperta
    // e armazenamos os valores no ENDERECO de peso e altura, respectivamente.

    imc = peso / pow(altura, 2);
    // Calculamos peso dividido pelo quadrado da altura, com a funcao pow() do modulo math.

    printf("\nO seu i.m.c. eh %f\n", imc);
    // Imprimimos na tela o resultado, um float, armazenado em imc.

    // Imprimimos informacoes adicionais condicionais.
    if (imc <= LIMITE) printf("\nVoce nao esta acima do peso") ;
    else printf("Voce esta acima do peso");

    // Retornamos zero para dizer ao sistema que o programa terminou corretamente.
    return 0;
    
}
