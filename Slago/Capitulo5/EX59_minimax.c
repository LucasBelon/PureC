/* Uma variavel pode ser interpretada como um vetor
 * contendo um unico elemento e, portanto, pode ser passada
 * por referencia se usarmos a notacao de vetor. Com base
 * nessa ideia codifique uma rotina minimax(t,x,y), que
 * devolve atraves dos parametros x e y, respectivamente,
 * a minima e a maxima entre as temperaturas armazenadas
 * no vetor t.*/


# include <stdio.h>

void minimax(vet, min, max, tam_vet)
float vet[];
float min[];
float max[];
int tam_vet;
{
    min[0]=100;
    do{
        if(vet[tam_vet]>max[0]) max[0] = vet[tam_vet];
        if(vet[tam_vet]<min[0]) min[0] = vet[tam_vet];
        --tam_vet;
    } while (tam_vet);
}

int main(void){
    int n = 6 ;
    float t[] = {22, 23.5, 30.1, 27.7, 25.3, 22.7, 21};
    float x[1];
    float y[1];
    minimax(t,x,y,n);

    printf("x=%f, y=%f\n",*x,*y);


    return 0 ;
}
