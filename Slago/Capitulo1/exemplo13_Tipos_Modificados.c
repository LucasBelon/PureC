/* Algumas variaveis de tipos modificados*/


# include <stdio.h>

int main(){
    unsigned char contador;
    /* char normal: -128 a 127
     * unsigned char: 0 a 255*/

    unsigned int a, b, c;
    /* Nao possui parte negativa 
     * Mas gera o mesmo efeito visto
     * com o tipo char, dobramos o limite
     * superior alcansavel.*/ 

    long int tam_arquivo;
    /* A depender da maquina, possui maior
     * range de valores para numero inteiro*/
    
    long long int muito_grande;
    /* O maior tipo de inteiro disponivel,
     * exceto se for usado um tipo do sistema
     * definido em stdlib.*/
    
    double dupla_Precisao;
    /* Um numero de precisao dupla, equivalente
     * a long double.*/
    
    long double muita_precisao;
    /* O maior float disponível.*/
    
    return 0 ;
}
