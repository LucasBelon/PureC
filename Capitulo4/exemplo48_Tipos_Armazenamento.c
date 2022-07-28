/* Classes de armazenamento:
 *
 * As principais classes de armazenamento sao:
 *
 * -Local ou automatica: Existe no escopo da funcao,
 *  eh o tipo default de armazenamento, entao nao 
 *  se costuma declarar:
 *  auto int x = 0;
 *  apesar de se aceitar a declaracao.
 * 
 * -Global ou Externa: Uma variavel eh global se 
 *  declarada fora de qualquer funcao (incluindo 
 *  a funcao main). Criadas no
 *  inicio do PROGRAMA, deletadas em seu fim.
 *  Pode-se declarar:
 *  extern int x = 0;
 *  dentro de funcoes para obter o valor da 
 *  variavel global.
 *
 *  -Estatica: Possui o escopo de uma local e a
 *  duracao de uma global. Possuem a vantagem de
 *  serem privativas e ao mesmo tempo manterem
 *  seu valor entre uma chamada e outra da funcao.
 *  Sua declaracao eh:
 *  static int x;
 *  Uma variavel estatica eh inicializada uma unica
 *  vez, quando eh criada (outras recorrencias sao
 *  ignoradas).
 *
 *  -Registrador: Armazenada num registrador da cpu,
 *  apenas valores char e int sao aceitos. Extremamente
 *  rapidos, podem ser declarados como:
 *  register int x;
 *  register char c;
 *  Em compiladores a otimizacao pode ser automatica.
 *  O escopo eh como o de variaveis locais.*/

# include <stdio.h>

int x = 3;
//Essa eh uma declaracao global

int y=2;


void funcao(void)
{
    extern int x;
    x = 0;
    y=3;
}


int aleat(void)
{
    static unsigned s = 1234;
    auto   unsigned n = s%100;
    s += s/10;

    return n;
}


int main(){
    //int x = 3;
    //Essa nao eh uma declaracao global
    funcao();
    printf("x=%d\n", x);
    printf("y=%d\n", y);
    printf("static:%d\n",aleat());
    printf("static:%d\n",aleat());
    printf("static:%d\n",aleat());
    printf("static:%d\n",aleat());
    printf("static:%d\n",aleat());
    return 0;
}
