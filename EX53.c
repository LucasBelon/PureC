/* Codifique um programa para solicitar
 * 5 numeros, via teclado, e exibi-los na
 * ordem inversa aquela em que foram fornecidos*/

# include <stdio.h>

int main(void){
    int vet[5];

    printf("De 5 inteiros separados por espaco:\n");
    scanf("%d %d %d %d %d",\
    &vet[0], &vet[1], &vet[2], &vet[3], &vet[4]);
    
    for (int c = 4; c>=0; --c) printf("%d ",vet[c]) ;
    printf("\n");
    
    return 0;
}
