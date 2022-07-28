/* Codifique a funcao monet(v) que recebe um valor real
 * e devolve uma string com a representacao monetaria
 * desse valor. Por exemplo, a chamada monet(1234.56) 
 * deve devolver "R$ 1.234,56" como resposta. */


# include <stdio.h>

/* Retorna uma string, representacao monetaria do valor v
 * Funcao pensada para floats com apenas duas casas decimais.*/
char *monet(const long double v)
{
    /* Vou precisar armazenar em uma string o valor convertido
     * em float. Eh mais facil armazenar invertido, e entao
     * apenas manipular a string para o formato desejado.*/
    char str_inverso[100];

    long long int valor = v*100; // "Convertendo o float em int."

    int indice_string_inversa; // Indice será incrementado e depois
                               // decrementado, por isso foi 
                               // declarado fora do loop for.

    int flag_pontuacoes = 1; // Usarei uma flag para adicionar
                             // pontuacoes a cada 3 digitos. Como
                             // a virgula vem apos 2 digitos, foi
                             // inicializada com o valor 1.
    
    /* Nesse loop for temos dois contadores que se incrementam
     * de forma diferente. Um se incrementa na rodada do loop e
     * dentro das condicoes if, o outro apenas a cada rodada.*/
    for (indice_string_inversa=0;
         valor != 0;
         ++indice_string_inversa, ++flag_pontuacoes)
    {
        // Adicionando as pontuacoes de acordo com a flag
        // o indice eh incrementado dentro das alteracoes aos
        // valores de str_inverso.
        if (flag_pontuacoes < 4 && flag_pontuacoes%3 == 0) 
            *(str_inverso+(indice_string_inversa++)) = ',';

        if (flag_pontuacoes > 3 && flag_pontuacoes%3 == 0) 
            *(str_inverso+(indice_string_inversa++)) = '.';

        // Adicionando na string o resto da divisao por 10, ou
        // seja, o ultimo caractere do numero.
        *(str_inverso+indice_string_inversa) = '0'+valor%10;

        // Realizando divisao inteira por 10, equivalente a 
        // excluir o ultimo caractere do numero.
        valor /= 10;
    }

    // Consertando o indice que andou demais.
    --indice_string_inversa;

    // Criando um espaco persistente na memoria para o qual
    // o ponteiro ira apontar, de forma que possa ser devolvido
    // pela funcao um bloco de memoria com dados validos.
    static char repr_monet[100] = "R$ ";
    int indice_string = 3; // Como predefinimos a string, iremos
                           // comecar a manipulacao de um indice
                           // nao nulo, no caso, no indice 3.

    /* Adicionando a repr_monet, ja na ordem correta, os 
     * numeros armazenados. Percebe-se que o indice se decrementa*/
    for ( ;
         indice_string_inversa >= 0; 
         --indice_string_inversa)
    {
        *(repr_monet+indice_string) = 
            *(str_inverso+indice_string_inversa);
        ++indice_string;
    }

    *(repr_monet+indice_string) = '\0'; // Garantindo que como 
                                        // ultimo caractere esteja
                                        // o caractere nulo.
    return repr_monet; // Retornando um ponteiro
}


int main(void){
    printf("%s\n", monet(123456789101112.00));
    printf("%s\n", monet(22));
    return 0 ;
}
