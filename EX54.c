/* Implemente um algoritmo para calcular o desvio
 * padrao de uma colecao de n numeros reais.*/

# include <stdio.h>
# include <math.h>


float soma_vetor(vetor, indice_vetor)
float *vetor;
int indice_vetor;
{
    float soma = 0;
    for( ;indice_vetor>=0;--indice_vetor) {
    soma += vetor[indice_vetor];
    }
    return soma;
}


float media_vetor(vetor, indice_vetor)
float *vetor;
int indice_vetor;
{
    float media = 0;
    media = (soma_vetor(vetor, indice_vetor) / (indice_vetor+1)) ;
    return media;
}


void quadrado_vetor(vetor, indice_vetor)
float *vetor;
int indice_vetor;
{
    for ( ;indice_vetor>=0 ; --indice_vetor){
        vetor[indice_vetor] *= vetor[indice_vetor];
    }
}


void dist_media(vetor, indice_vetor, media)
float *vetor;
int indice_vetor;
{
    for ( ;indice_vetor>=0 ; --indice_vetor){
        vetor[indice_vetor] -= media ;
    }
}


int main(void){
    int n;
    float media;
    float soma_quadrada;
    float desv_pad;

    //Obtendo o número de termos do vetor:
    printf("Escreva o número de termos:");
    scanf("%d", &n);
    //Como n será usado como indice de vetor, subtraimos 1
    n -= 1;

    //Inicializando o vetor com o tamanho correto:
    float valores[n+1];
    
    //Populando o vetor com valores:
    for (int i=0;i<=n;++i){
        printf("Digite o %do termo:",i+1);
        scanf("%f", &valores[i]);
    }
    
    //Visualizando o vetor:
    for (int i=0;i<=n;++i) printf("v[%d]=%f\n",i,valores[i]);
    
    //Obtendo a média dos valores do vetor:
    media = media_vetor(valores, n);
    
    //Subtraindo de cada um dos termos do vetor a média :
    dist_media(valores, n, media);
    
    //Elevando ao quadrado cada um dos termos do vetor:
    quadrado_vetor(valores, n);
    
    //Somando o vetor quadrado da diferença da média:
    soma_quadrada = soma_vetor(valores, n);
    
    //Tirando a raiz, obtendo o desvio padrao:
    desv_pad = sqrtf( soma_quadrada/(n) );

    //Imprimindo o valor do desvio padrao
    printf("O Desvio padrao eh: %f\n", desv_pad);

    //Retornando valor para função finalizada com sucesso
    return 0;
}
