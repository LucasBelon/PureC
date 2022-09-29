/* No exemplo 7.25 vimos o uso de vetores
 * dinâmicos e em 7.27, vetores de ponteiros 
 * para estruturas dinâmicas. Altere o 
 * programa do exemplo 7.27 de modo que o 
 * vetor de ponteiros para estruturas f 
 * também seja alocado dinamicamente. 
 * [Dica: você vai precisar usar um ponteiro 
 * de ponteiro, para isso basta usar a 
 * declaração funcionario **f. Antes de 
 * programar, tente esquematizar como ficará 
 * a configuração da memória.]*/

# include <stdio.h>
# include <stdlib.h>

# define MAX 3

typedef struct {
    char nome[21];
    float salario;
} funcionario;

int main(void){
    int n;
    printf("Quantos funcionarios?\n");
    scanf("%d", &n);
    funcionario **f;
    f = malloc(n*sizeof(funcionario));
    for(int i = 0; i<n; i++){
         f[i] = malloc( sizeof(funcionario) );
         printf("\nNome: ");
         scanf("%s", f[i]->nome);
         printf("Salario: ");
         scanf("%f", &f[i]->salario);
    }
    
    return 0 ;
}
