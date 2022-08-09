/* Exibindo dados com a funcao printf().*/


/* Especificadores de formatacao do printf:
 *
 * %c - Um unico caractere.
 * 
 * %o, %d, %x - Inteiro em octal, decimal, 
 * hexadecimal 
 * 
 * %u - Inteiro sem sinal
 *
 * %ld - Inteiro longo
 *
 * %f, %lf - flutuante de precisao simples e dupla
 *
 * %s - cadeia de caracteres (string)
 *
 * %Lf - Flutuante com precisao dupla aumentada: long double
 *
 * %% - sinal de porcentagem.*/


/* Caracteres de controle:
 *
 * \a - soa um alarme (pode nao funcionar)
 *
 * \b - cursor retrocede uma coluna (idem)
 *
 * \f - alimenta pagina na impressora
 *
 * \n - nova linha
 *
 * \r - retrocede para primeira coluna da linha
 * Útil para prints com mais de uma linha no código
 * fonte. Todos os exemplos foram alterados para usá-lo
 *
 * \t - tabulacao (tab)
 *
 * \" - Exibe aspa dupla
 *
 * \' - Exibe aspa simples
 *
 * \\ - Exibe contra-barra.*/



# include <stdio.h>

# define PI 3.1415

int main(){
    double raio, perim;

    printf("Qual a medida do raio?");
    scanf("%lf", &raio);

    perim = 2*PI*raio;

    printf("O perimetro da \n\
            \rcircunferencia eh %lf", 
            perim
            );

    return 0 ;
}
