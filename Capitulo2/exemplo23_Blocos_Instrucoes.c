/* O uso de blocos de instrucoes. */


# include <stdio.h>

int main(){
    float a, b, m;

    printf("Informe as duas notas obtidas:");
    scanf("%f %f", &a, &b);

    m = (a + b) / 2;

    if (m >= 7){
        printf("Nota azul, portanto,\n");
        printf("Aprovado\n");
    }
    else {
        printf("Nota Vermelha, portanto,\n");
        printf("Reprovado\n");
    }

    return 0 ;
}
