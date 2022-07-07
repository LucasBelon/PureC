/* Uma agenda com dados de 5 pessoas.
 * Podemos ter vetores como membros de uma estrutura
 * e podemos ter um vetor de estruturas, como veremos
 * a seguir. Perceber no exemplo a forma de acessar
 * os membros da estrutura.*/


# include <stdio.h>

typedef struct {
    int dia;
    int mes;
    int ano;
} DATA;

typedef struct {
    char nome[31];
    char fone[21];
    DATA nasc;
} PESSOA ;


int main(void){
    PESSOA agenda[5];
    strcpy(agenda[2].nome,"Jo soares");
    strcpy(agenda[2].fone, "123456");
    agenda[2].nasc.dia = 21;
    agenda[2].nasc.mes = 12;
    agenda[2].nasc.ano = 500;
    /* Como uma string eh um vetor de caracteres
     * podemos fazer o seguinte com o membro "nome"*/
    agenda[2].nome[2] = '_';
    puts(agenda[2].nome);
    return 0 ;
}
/* Um vetor cujos elementos sao estruturas eh denominado
 * tabela. Veja a representacao:
 *
 *         nome          fone        nasc
 *   +----------------------------------------+
 * 0 | Itivaldo Buzo  | 850-9973 | 27/07/1970 |
 *   |----------------------------------------|
 * 1 | Roberto Soares | 266-0879 | 15/11/1971 |
 *   |----------------------------------------|
 * 2 | Marcia Ueji    | 576-8292 | 09/05/1966 |
 *   |----------------------------------------|
 * 3 | Silvio Lago    | 851-7715 | 18/03/1968 |
 *   |----------------------------------------|
 * 4 | Mie Kobayashi  | 834-0192 | 04/12/1973 |
 *   +----------------------------------------+
 * */
