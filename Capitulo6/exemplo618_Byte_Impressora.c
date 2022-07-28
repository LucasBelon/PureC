/* Estrutura para o byte de status da impressora paralela.*/


# include <stdio.h>
typedef struct { 
    unsigned t_esgotado : 1; 
    unsigned reservado : 2; 
    unsigned erro_de_ES : 1; 
    unsigned selecionada : 1; 
    unsigned sem_papel : 1; 
    unsigned reconhecida : 1; 
    unsigned desocupada : 1; 
} status;


int main(void){

    return 0 ;
}
