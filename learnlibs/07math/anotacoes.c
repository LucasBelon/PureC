/* Arquivo para teste de math.h */

# include <stdio.h>
# include <math.h>

int main(void){
    /* Essa biblioteca foi bem anotada em
     * anotacoes.txt
     * */
    printf("%lf, %lf, %0.0lf°\n",
            acos(0), 
            acos(0)/M_PI, 
            acos(0)*180/M_PI);
    // A linha acima testa se os resultados
    // sao em radianos ou em graus.
    // Sao em radianos.
    printf("Exp:%lf\n",exp(3));
    printf("Exp:%lf\n",pow(M_E,3));
    printf("Log(zero):%lf\n",log(0));
    printf("Log(e):%lf\n",log(M_E));
    printf("ceil(e):%lf\n",ceil(M_E));
    printf("floor(e):%lf\n",floor(M_E));
    printf("fabs(-e):%lf\n",fabs(-M_E));
    
    return 0;    
}
