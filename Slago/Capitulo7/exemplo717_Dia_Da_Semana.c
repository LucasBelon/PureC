/* Obtendo o dia da semana por extenso.*/


# include <stdio.h>


char *dia_semana(int n)
{
    /* Criamos strings estáticas. Cada string
     * será referenciada por um ponteiro.
     * Estes ponteiros, por sua vez, serão
     * armazenados em uma array.*/
    static char *d[] = {
        /* um vetor de ponteiros de strings*/
        "erro",
        "Domingo",
        "Segunda-Feira",
        "Terca-Feira",
        "Quarta-Feira",
        "Quinta-Feira",
        "Sexta-Feira",
        "Sabado"
    };
    /* d[] retorna o endereço (ponteiro) que a 
     * string correspondente possui. Nao estamos
     * retornando a variavel em si, mas sim um
     * endereco. É preciso que as strings perdurem
     * para que o endereco aponte para o valor desejado.*/
    return d[ (1<=n && n<=7) ? n : 0];
}


int main(void){
    printf("%s",dia_semana(4));

    return 0 ;
}
