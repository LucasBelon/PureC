/*Exemplo 5.37. Ordenação por inserção. */


void insercao(int v[], int n) { 
    int i, j, x;
    for(i=1; i<n; i++) { 
        x = v[i]; 
        for(j=i-1; j>=0 && x<v[j]; j--) 
            v[j+1] = v[j]; 
        v[j+1] = x; 
    }
}
