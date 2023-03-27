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
    // Outra forma de inicializar uma estrutura
    // é como se segue:
    static DATA amanha = {.ano = 2023, .dia = 5, .mes = 8};

    printf("%02d/%02d/%d\n", hoje.dia, hoje.mes, hoje.ano);
    printf("%02d/%02d/%d\n", amanha.dia, amanha.mes, amanha.ano);

    
    return 0 ;
}
