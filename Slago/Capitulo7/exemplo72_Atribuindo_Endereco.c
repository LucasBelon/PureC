/* Sentencas em C.*/


# include <stdio.h>

int main(void){
    char *p; 
    // Cria um ponteiro variavel, aritmetica pronta
    // para trabalhar com char (pula de byte em byte).
    char v = 'A';
    // Inicializa uma variavel V com valor'A'.
    // essa variavel tem endereço. Nomes de funcoes e
    // arrays sao ponteiros fixos, mas nomes de variaveis
    // sao referencias?
    p = &v;
    // Preciso explicitamente pedir o endereco
    printf("%c\n",*p);
    // imprimo o valor que p tem. Sei que o valor eh char
    // EXPERIMENTACAO PROPRIA
    char array[]="LUCAS";
    // Crio uma array para testar
    p = array-1;
    // atribuo ao ponteiro p o endereço do primeiro item
    // menos um, para compensar o incremento do loop a
    // seguir. Ponteiros podem ser incrementados
    while (*(p++)) printf("%c\n",*p);
    // Toda string termina com '\0' equivalente a 0 em char.
    // uso isso para interromper meu loop. Uso o ponteiro
    // para caminhar na array enquanto incremento o passo na
    // propria verificacao. Ponteiros sao divertidos.
    return 0 ;
}
