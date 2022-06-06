/* Dados os coeficientes (a!=0), b e c de uma equacao
 * do segundo grau, calcule e infome suas raizes reais,
 * usando a formula de bhaskara.*/

# include <stdio.h>
# include <math.h>

int main(){
    float a, b, c, delta, raiz1, raiz2;

    printf(\
"Informe os coeficientes da equacao\n\
do segundo grau na forma: ax^2+bx+c=0\n"\
    );
    scanf("%f %f %f", &a, &b, &c);
    
    delta = pow(b,2)-(4*a*c);
    
    if (delta<0) \
        printf("Essa equacao possui raizes complexas\n");

    else {
        raiz1 = (-b+sqrtf(delta))/(2*a);
        raiz2 = (-b-sqrtf(delta))/(2*a);
        
        printf(\
"As raizes da sua equacao sao:\n\
x1 = %f\n\
x2 = %f\n\
", raiz1, raiz2 \
        );
        
        if (raiz1>0 && raiz2>0) \
            printf(\
"Sua equacao poderia ser escrita como:\n\
(x-%f)*(x-%f)\n" ,\
raiz1 ,\
raiz2 \
            );

        else if (raiz1<0 && raiz2<0)\
            printf(\
"Sua equacao poderia ser escrita como:\n\
(x+%f)*(x+%f)\n" ,\
raiz1*(-1) ,\
raiz2*(-1)
            );

        else printf(\
"Sua equacao poderia ser escrita como:\n\
(x-%f)*(x+%f)=0\n" , \
(raiz1>raiz2)?raiz1:raiz2 , \
(raiz1<raiz2)?raiz1*(-1):raiz2*(-1)
            );
    };

    return 0;
}
