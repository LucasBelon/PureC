/* Seja x = 5 e considere a instrucao 
 * y = ++x + x++;
 * quais sao os valores de x e y apos a operacao? 
 * Resposta:
 * x sera 7 pois sofreu dois incrementos e
 * y sera 12, pois soma-se 6 do primeiro incremento
 * com o valor de x=5 , sem o incremento, devido
 * a ordem das operacoes.*/
# include <stdio.h>

int main(){
    int x = 5, y;
    y = (++x) + (x++);
    printf("x=%d, y=%d\n", x, y);

    return 0;
}
