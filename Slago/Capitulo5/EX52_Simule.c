/* Seja w um vetor contendo 9 elementos inteiros.
 * Supondo que i seja uma variavel inteira valendo 5,
 * que valores estarao armazenados em w apos as
 * atribuicoes a seguir?
 *
 * 1) w[0]=17;          5) w[i]=w[2];
 * 2) w[i/2]=9;         6) w[i+1]=w[i]+w[i-1];
 * 3) w[2*i-2]=95;      7) w[w[2]-2]=78;
 * 4) w[i-1]=w[8]/2;    8) w[w[i]-1]=w[1]*w[i];
 * */

# include <stdio.h>

int main(){
    int w[9];
    int i=5;
    int vet[i]; //Interessante
    w[0]=17;      
    w[i/2]=9;     
    w[2*i-2]=95;  
    w[i-1]=w[8]/2;
    w[i]=w[2];
    w[i+1]=w[i]+w[i-1];
    w[w[2]-2]=78;
    w[w[i]-1]=w[1]*w[i];

    for(int c=0;c<9;++c){
        printf("%d\n",w[c]);
    }

    return 0;
}
