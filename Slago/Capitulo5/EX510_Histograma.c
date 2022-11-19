/* Codifique a função histograma(t), que exibe um histograma 
da variação da temperatura durante a semana. Por exemplo, se as tempera-
turas em t forem 19, 21, 25, 22, 20, 17 e 15°C, a função deverá exibir: 
D: ▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄
S: ▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄
T: ▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄
Q: ▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄
Q: ▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄
S: ▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄
S: ▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄
Suponha que as temperaturas em t sejam todas positivas e que nenhuma 
seja maior que 50°C. [Dica: crie uma função para exibir uma linha.] */


# include <stdio.h>
void linha(int n){
    while(n) {
        printf("▄");
        --n;
    }
}

void histograma(t,n,dias)
int t[];
int n;
char dias[];
{
    for(int i=0;i<n;++i){
        printf("%c: ",dias[i]);
        linha(t[i]);
        printf("\n");
    }
}

int main(void){
    char dias[] = {'D','S','T','Q','Q','S','S'};
    int n = 7;
    int t[] = { 19, 21, 25, 22, 20, 17, 15};
    
    histograma(t,n,dias);
    return 0 ;
}
