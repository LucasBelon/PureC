/* Dados os coeficientes 
 * a0, a1, a2, ... , an de um polinomio 
 * p(x)=a0x^n + a1x^(n-1) +...+ a_{n-1}x + an,
 * e uma sequencia de valores de x, avaliar o 
 * polinomio para cada um dos valores de x.*/


# include <stdio.h>
# include <math.h>
# define LIM_BAIXO -10
# define LIM_ALTO 10
# define PASSO 0.2

int main(){
    // pot_max sera usada para sabermo o tamanho do vetor
    int pot_max;
    // polinomioX sera usado como temp para armazenar cada p(x)
    float polinomioX;
    
    // Imprimimos como nosso programa ira avaliar o polinomio
    printf(\
"Seu polinomio sera avaliado entre %d e %d\n\
Com passo de %.1f. Sera devolvida uma tabela\n",\
LIM_BAIXO, LIM_ALTO, PASSO);
    
    // Obtemos qual a potencia maxima e por consequencia o tam do vetor
    printf("Digite a potencia maxima do seu polinomio:");
    scanf("%d", &pot_max);

    // Como temos um termo independente de potencia, nosso vetor tera
    // um coeficiente a mais do que o numero de potencias.
    float coeficientes[pot_max+1];
    
    // Obtemos os coeficientes do polinomio
    for(int i=0;i<=pot_max;++i){
        printf(\
"Digite o coeficiente que será associado a x^%d: ",pot_max-i);
        scanf("%f",&coeficientes[i]);
    }

    // Iremos variar X dentre dois limites, com um certo passo.
    for(float x=LIM_BAIXO; x<=LIM_ALTO; x+=PASSO){
        // Como cada p(x) sera diferente, e iremos obte-los pela
        // soma dos termos, zeramos a cada rodada o valor de
        // polinomioX
        polinomioX = 0;

        // Cada termo sera somado, no formato a*x^(i)
        for(int j=0;j<=pot_max;++j){
            polinomioX += coeficientes[j]*powf(x,pot_max-j);
        }

        // Antes que nosso valor seja zerado, imprimimos na tela
        // o resultado, e repetimos o processo para outros X
        printf("Para X=%f, p(x)=%f\n",x,polinomioX);
    }


    return 0 ;
}
