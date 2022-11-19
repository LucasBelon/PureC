/* Inicializacao de uma variavel do tipo DATA */


# include <stdio.h>

typedef struct {
    int dia;
    int mes;
    int ano;
} DATA;

// Lembrando que, caso nao seja uma estrutura
// recursiva, basta ela ser nomeada para criarmos
// um tipo definido, typedef, como a estrutura.


int main(void){
    static DATA hoje = {5, 7, 2022};

    printf("%02d/%02d/%d\n", hoje.dia, hoje.mes, hoje.ano);
    
    return 0 ;
}
