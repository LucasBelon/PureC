/* Usando uma variável do tipo mutante.*/ 

# include <stdio.h>
typedef struct {
    int etiqueta;
    union {
        char a;
        int b;
        float c;
    } valor;
} mutante;


int main(void){
    mutante m; 
    //Para usar o membro inteiro da união em m, por exemplo, fazemos: 
    m.etiqueta = 2; 
    m.valor.b = 459; 
    //Se for preciso exibir o valor de m, podemos usar o código: 
    switch( m.etiqueta ) { 
        case 1 : printf("%c\n", m.valor.a); break;
        case 2 : printf("%d\n", m.valor.b); break; 
        case 3 : printf("%f\n", m.valor.c); break; 
        default: printf("\netiqueta indefinida\n"); 
    }

    return 0 ;
}
