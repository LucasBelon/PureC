/* O comando return so devolve um unico valor, e ele interrompe
 * a execucao da funcao. Por isso nao podemos pedir para uma
 * funcao devolver mais de um valor por vez (talvez mais tarde?)
 * 
 * calculando a hipotenusa de um triangulo retangulo:*/

# include <stdio.h>
# include <math.h>

float hip(float a, float b)
{
    float h;
    h = sqrt(powf(a,2)+powf(b,2));
    return h;
}

int main(){
    float a=3, b=4;
    printf("%.2f\n",hip(a,b));
    return 0;
}
