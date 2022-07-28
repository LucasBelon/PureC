/* Vetores, ponteiros, estruturas e malloc().*/


# include <stdio.h>
# include <stdlib.h>

# define MAX 3

typedef struct {
    char nome[21];
    float salario;
} funcionario;

int main(void){
    funcionario *f[MAX];
    int i;
    for(i = 0; i<MAX; i++){
         f[i] = malloc( sizeof(funcionario) );
         printf("\nNome: ");
         gets(f[i]->nome);
         printf("Salario: ");
         scanf("%f", &f[i]->salario);
    }

    return 0 ;
}
