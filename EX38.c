/* dado n>=3 exiba o n-esimo termo da sequencia de fibonacci.*/

# include <stdio.h>

int main(){
    long double a, b, temp, n, n_copia;
    a=1;
    b=1;
    printf("Escolha em qual termo parar:\nn=");
    scanf("%Lf",&n);
    n_copia = n;
    for(\
    printf("Fibo n°1: %.0Lf\n", a); \
    3 <= n; \
    --n )\
    {
        printf("Fibo n°%.0Lf: %.0Lf\n",(n_copia-n+2),a);
        temp=a;
        a = a+b;
        b = temp;
    };
    printf(\
"O %.0Lf-esimo termo da \
sequencia de fibonacci eh:\
\nFibo:%.0Lf \n", \
n_copia, \
a
    );

    return 0;
}
