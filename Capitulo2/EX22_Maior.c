/*Dados dois numeros distintos informe qual deles eh maior */

# include <stdio.h>

int main(){
    float a, b;

    printf("Escreva dois numeros e eu direi qual eh maior:\n");
    scanf("%f %f",&a,&b);
    //Vou usar um operador ternario ao inves de um if-else
    printf("Este numero eh o maior: %.1f\n", (a>b)?a:b );

    return 0;
}

void com_if_else(void){
    float a, b;

    printf("Escreva dois numeros e eu direi qual eh maior:\n");
    scanf("%f %f",&a,&b);
    if (a>b) printf("Este numero eh maior: %.1f\n", a);
    else     printf("Este numero eh maior: %.1f\n", b);
}
