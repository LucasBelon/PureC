/* Defina as funcoes  */

# include <stdio.h>


/* EX4.8: Codifique a funcao fat(n), 
 * que devolve o fatorial de n */
long double fat(long double n)
{
    long double x;
    
    for (x = n - 1; x > 0; --x){
        n *= x;
    }
    //printf("Resultado: %.0Lf\n",n);
    return n;
}


/* EX4.9: Codifique a funcao pot(x,n),
 * que devolve x elevado a n */
long double pot(x,n)
long double x;
int n;
{
    long double pot;
    int cont;
    pot = x;
    for (cont = 1; cont < n; ++cont){
        pot *= x;
    }
    //printf("resultado: %Lf\n", pot);
    return pot;
}


/* EX4.10: Codifique a funcao quad(n),
 * que devolve o quadrado de n usando
 * o metodo da soma de impares */
long double quad(long double n)
{
    long double quadrado = 0;
    int cont;
    for (cont = 1; cont <= (2 * n); ++cont) {
        if ((cont%2) != 0){
            quadrado += cont;
        };
    };
    //printf("O Quadrado de %.2Lf eh %.2Lf", n, quadrado);
    return quadrado;
}


/* EX4.11: Codifique uma funcao que
 * receba um numero real n e devolve
 * sua raiz quadrada r. Para calcular
 * r utilize o metodo proposto por newton:
 *
 * 1o: chuta-se um valor inicial para a raiz
 * igual a 1.
 * 2o: caso |r^2 - n| seja inferior a 0.001,
 * r eh a resposta. (fim)
 * 3o: Caso contrario, aproxima-se r = (r^2+n)/(2r)
 * e retorna-se ao passo 2.*/
# define abs(x) ((x)>0?(x):-(x))
# define quadrado(x) ((x)*(x))
# define PRECISAO 0.0000000001

long double raiz_newton(w)
long double w;
{
    long double chute_inicial = 1;
    while ( abs( quadrado(chute_inicial) - w ) > PRECISAO )
    {
        chute_inicial = \
        (quadrado(chute_inicial)+w)/(2*chute_inicial);
    }
    //printf("A raiz de %Lf eh %Lf\n", w, chute_inicial);
    return chute_inicial;
}

/* Funcao main usada para testar as funcoes definidas*/
int main(){

    // Testando a funcao fat(n)
    long double n, fat_n;
    //printf("Calcularei o fatorial de seu numero:\n");
    //scanf("%Lf",&n);
    n = 10;
    fat_n = fat(n);
    
    // Testando a funcao pot(x,n)
    long double x, pot_x;
    int y;
    //printf("Escreva x e y para x^y:\n");
    //scanf("%Lf %d", &x, &y);
    x = 100;
    y = 2;
    pot_x = pot(x,y);

    // Testando a funcao quad(z)
    long double z, quad_z;
    //printf("Calcularei o quadrado pela soma de impares:\n");
    //scanf("%Lf",&z);
    z = 23;
    quad_z = quad(z);

    // Testando a funcao raiz_newton(w)
    long double w, raiz_w;
    //printf("Calcularei a raiz pelo metodo de newton:\n");
    //scanf("%Lf",&w);
    w = 225;
    raiz_w = raiz_newton(w);
    printf("Raiz:%Lf\n",raiz_w);
    
    return 0;
}
