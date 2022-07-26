/* Codifique a funcao strsub(s,i,n) que devolve a substring
 * de s que inicia-se na posicao i e tem, no maximo, n
 * caracteres. A string s nao deve ser alterada. 
 * [Dica: copie os caracteres para outro local de memoria.]*/


# include <stdio.h>


/* Funcao cria substring e devolve endereco
 * de inicio da substring. De fato realiza uma
 * copia da secao desejada da string em memoria.*/
char *stringsub(char *s, int i, int n)
{
    int contador = 0;
    static char substring[1000];
    // static char *substring; 
    // eh o que eu queria poder usar mas eu preciso de uma
    // forma de manter uma quantidade estatica de memoria 
    // separada, mesmo sem saber quais dados seriam usados
    // nesse espaço.
    while (contador<=(n-i)){
        // Copio para a substring o trecho desejado em funcao
        // de i e n, utilizando notacao de ponteiro.
        *(substring+contador) = *(s+i+contador);
        ++contador;
    }
    // Na pratica, estou manipulando strings, mas como interface
    // entre funcoes estou usando ponteiros.
    return substring;
}



int main(){
    char *string = "Hello World";
    int posicao_i = 5, tam_n = 11;
    printf("%s",stringsub(string, posicao_i, tam_n));

    return 0 ;
}
