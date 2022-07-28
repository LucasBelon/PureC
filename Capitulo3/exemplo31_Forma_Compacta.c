/* Operadores aritimeticos de atribuicao, incremento
 * e decremento:
 *
 *  +============================+
 *  | Expressao | Forma Compacta |
 *  +----------------------------+
 *  |  x = x+y  |     x += y     |
 *  |  x = x-y  |     x -= y     |
 *  |  x = x*y  |     x *= y     |
 *  |  x = x/y  |     x /= y     |
 *  |  x = x%y  |     x %= y     |
 *  |  x = x+1  |   ++x ou x++   |
 *  |  x = x-1  |   --x ou x--   |
 *  +============================+
 * */


# include <stdio.h>

int main(){
    int x = 5, y = 5;
    ++x;
    y--;
    printf("x = %d, y=%d", x, y);
    return 0 ;
}
