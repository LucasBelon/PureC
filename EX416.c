/* Para cada problema a seguir defina uma funcao
 * recursiva, faca a simulacao por substituicao e
 * desenhe o fluxo de chamadas e retornos:
 *
 * a) Calcular o fatorial de um numero natural
 * b) Calcular o resto da divisao inteira usando subtracao
 * c) Calcular o quociente da divisao inteira usando subtracao
 * d) Calcular o produto de dois naturais usando adicao
 * e) Calcular a soma de dois naturais usando as funcoes
 * suc(n) e pred(n), que devolvem, respectivamente, o sucessor
 * e o predecessor de um natural n.
 * */

# include <stdio.h>


int fat(int n)
{
    if (n-1) return n * fat(n-1);
    return n;
}


int resto_da_div(int x, int y)
{
    if (x-y>=0) x=resto_da_div(x-y,y);
    return x;
}


int div_inteira(int x, int y)
{
    static unsigned int cont=0;
    cont+=1;
    if (x-y>0) div_inteira(x-y,y);
    return cont-1;
}


int prod(int x, int y)
{
    if (y>1) return x + prod(x,y-1);
    return x;
}

int pred(int x) {return x-1;}
int suc(int x)  {return x+1;}

int soma_pred_suc(int x, int y)
{
    if (x>y){
        int temp = y;
        y = x;
        x = temp;
    }

    if (x>0){
        x = pred(x);
        y = suc(y);
        y = soma_pred_suc(x,y);
    }
    return y;
}


int main(){
    int x = 4;
    int y = 8;
    printf("Testando %d!=%d\n",x, fat(x));
    printf("Testando %d%%%d=%d\n",x, y, resto_da_div(x,y));
    printf("Testando %d/%d=%d\n",x, y, div_inteira(x,y));
    printf("Testando %d*%d=%d\n",x, y, prod(x,y));
    printf("Testando %d+%d=%d\n",x, y, soma_pred_suc(x,y));
    return 0;
}
