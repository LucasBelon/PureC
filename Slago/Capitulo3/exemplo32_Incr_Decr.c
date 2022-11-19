/* Operadores de incremento e decremento.
 * 
 * A diferenca entre usar um operador na forma 
 * prefixa ou posfixa aparece somente quando 
 * ele eh utilizado numa expressao, juntamente 
 * com outros operadores. Neste caso o 
 * funcionamento eh o seguinte:
 *
 * - Na forma prefixa, a variavel eh alterada 
 *   e depois seu valor eh usado.
 *
 * - Na forma posfixa, o valor da variavel eh 
 *   usado e depois ela eh alterada.
 *
 * */


# include <stdio.h>

int main(){
    int x = 5, y = 5, v, w;
    v = ++x;
    w = y--;
    printf(
    "x = %d, y = %d, v = %d, w = %d", 
    x, y, v, w);

    return 0 ;
}
