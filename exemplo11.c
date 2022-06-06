/* Este programa foi compilado com
 * cc % -lm
 * e eu nao sei o que essas flags significam*/

# include <stdio.h>
# include <math.h>

# define LIMITE 30

int main(){
    float peso, altura, imc;
    printf("\nQual o seu peso e altura?\n");

    scanf("%f %f",&peso, &altura );

    imc = peso / pow(altura, 2);

    printf("\nO seu i.m.c. eh %f\n", imc);

    if (imc <= LIMITE) printf("\nVoce nao esta acima do peso") ;
    else printf("Voce esta acima do peso");

    return 0;
    
}
