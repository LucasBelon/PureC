/* O uso de condifionais aninhados e encadeados.*/

/* Dados Tres numeros verificar se eles podem representar
 * as medidas dos s de um triangulo e, se puderem,
 * classificar em equilatero, isosceles ou escaleno
 * vou adicionar verificar se eh um triangulo retangulo*/

# include <stdio.h>
# include <math.h>

int main(){
    float a, b, c;
    
    printf("Escreva as medidas do triangulo:\n");
    scanf("%f %f %f", &a, &b, &c);

    if((a+b)>c && (a+c)>b && (b+c)>a){
        printf("Eh um triangulo\n");

        if (a==b && b==c && a==c)\
            printf("o triangulo eh equilatero\n");

        else if (a==b || b==c || a==c) \
            printf("o triangulo eh isosceles\n");

        else if \
            ( (powf(a,2)+powf(b,2) ) == powf(c,2) || \
              (powf(b,2)+powf(c,2) ) == powf(a,2) || \
              (powf(a,2)+powf(c,2) ) == powf(b,2) )  \
                printf("O triangulo eh retangulo\n");

        else printf("O triangulo eh escaleno e nao retangulo\n");
    }

    else printf("Nao eh um triangulo\n");

    return 0;
}
