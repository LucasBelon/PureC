/* Codifique a função minimax(v,n,a,b), 
 * que recebe um vetor v contendo n 
 * números reais e devolve em a e b, 
 * respectivamente, os valores mínimo 
 * e máximo entre aqueles armazenados em v*/


# include <stdio.h>

/* Funcao que armazena os valores minimo e maximo
 * do vetor v[n] e armazena em a e b, respectivamente*/
void minimax(int v[], int n, int * a, int * b)
{
    *a = *b = v[n/2];
    while(n){
        if (*a > v[n]) *a = v[n];
        if (*b < v[n]) *b = v[n];
        --n;
    }
}

int main(void){
    int a, b, n = 6;
    int v[] = {2, 3, 4, 5, 6, 7, 8};
    minimax(v, n, &a, &b);
    printf("Mínimo = %d, Máximo = %d\n", a,b);
    return 0 ;
}

/* Exercício 7.3. Explique o que aconteceria se na 
 * chamada permuta(&a,&b), feita em main() no exemplo 
 * 7.6, o operador & fosse omitido.
 *
 * Se o operador & fosse omitido, os ponteiros receberiam,
 * no lugar do endereco da variavel, o valor da variavel.
 * Caso o valor fosse um valor hexadecimal correspondente a
 * um endereco valido, a funcao minimax poderia acabar 
 * sobrescrevendo um fragmento importante da memoria, o que
 * poderia gerar dois cenarios: Nada acontece pelo endereco
 * nao conter nenhum dado, ou o programa inteiro poderia 
 * crachear.*/
