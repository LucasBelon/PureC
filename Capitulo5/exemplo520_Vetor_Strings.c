/* Uma matriz de caracteres usada como
 * um vetor de strings.*/


# include <stdio.h>

int main(void){
    char n[5][11];
    int i;
    for (i=0; i<5; ++i){
        printf("%do nome:", i+1);
        gets(n[i]);
    }
    return 0 ;
}
