/* Calculo de potencia por recursividade*/

# include <stdio.h>

double pot(double x, unsigned int n)
{
    printf(\
    "return (x=%lf) * pot( x=%lf, (n-1=%u) )\n",\
    x, x, n-1 \
    );
    if( n==0 ) return 1;
    return x * pot(x,n-1);
}


int main(){
    printf("%lf\n",pot(3,2));
    return 0;
}
