/* Em cada iteracao do laco for, na funcao pertence(), 
 * sao realizadas duas comparacoes: i<n e x==L[i]. 
 * Podemos reduzir esse numero pela metade se empregarmos 
 * uma tecnica, denominada sentinela, que consiste em 
 * deixar uma posicao livre no final do vetor e, antes de 
 * iniciar a busca, armazenar nela o elemento procurado. 
 * Entao podemos percorrer o vetor enquanto tivermos 
 * x!=L[i]. Quando o laco parar, se tivermos i<n significa 
 * que o elemento foi encontrado; caso contrario, o laco 
 * parou por ter encontrado a sentinela que foi 
 * posicionada no final do vetor e, portanto, ocorreu 
 * fracasso. Implemente uma funcao de busca linear usando 
 * essa tecnica. */


# include <stdio.h>


int pertence(int x, int L[], int n){
    L[n]=x;
    int i;
    while(x!=L[i])
        ++i;
    if (i<n) return 1;
    else return 0;
    /*
    for(i = 0; i<n; ++i)
        if (x==L[i])
            return 1;
    return 0;
    */
}

int main(void){
    int n = 10;
    int x = 15;
    int L[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    printf("%s\n", (pertence(x, L, n))?"Pertence":"Não Pertence");    
    return 0 ;
}
