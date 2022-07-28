/* Crie uma programa para preencher aleatoriamente 
 * três vetores (com a mesma seqüência de números) 
 * e então ordenar cada um deles por um método 
 * distinto, marcando o tempo que cada um gasta. 
 * Faça seu programa tabular os tempos para tamanhos 
 * crescentes do vetor. [Dica: use a função clock(), 
 * definida em time.h]
 * 
 * TÔ COM PREGUIÇA*/

# include <stdio.h>
# define TAM 9

void preenche_tres(int Vor[], int n, int V1[], int V2[])
{
    for (int i=0;i<n;++i){
        V1[i]=Vor[i];
        V2[i]=Vor[i];
    }
}


void insercao(int v[], int n) { 
    int i, j, x;
    puts("Inserçao:");
    puts("i v0 v1 v2 v3 v4 v5 v6 v7 v8");
    for(i=1; i<n; i++) { 
        x = v[i]; 
        for(j=i-1; j>=0 && x<v[j]; j--) 
            v[j+1] = v[j]; 
        v[j+1] = x;
        putchar('0'+i);
        for (int k=0;k<n;++k) printf(" %02d",v[k]);
        putchar('\n');
    }
}


int main(void){
    int L1[TAM] = {82, 50, 71, 63, 85, 43, 39, 97, 14};
    int L2[TAM], L3[TAM];
    preenche_tres(L1, TAM, L2, L3);
    insercao(L1, TAM);
    return 0 ;
}
