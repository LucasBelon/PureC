/* Uma fraqueza da funcao aleat eh que
 * como a semente inicial eh sempre a mesma,
 * os numeros aleatorios gerados sao sempre
 * os mesmos. Para melhorar seu desempenho
 * seria interessante que a semente inicial
 * tambem fosse aleatoria. Para isso, podemos
 * usar a funcao time(), definida em time.h
 * Quando chamamos time(&t), sendo t uma variavel
 * do tipo long int, essa funcao armazena em t
 * o numero de segundos que se passaram desde
 * 1 de janeiro de 1970. Altere a funcao aleat()
 * de modo que o valor inicial da semente seja os
 * ultimos 4 digitos do valor devolvido por time().
 * Tome o cuidado para nao deixar a semente 
 * tornar-se zero pois, nesse caso, todos os numeros
 * gerados subsequentemente tambem serao zero.*/

# include <stdio.h>
# include <time.h>

/* Para obter a variavel foi preciso manipular 
 * ponteiros, apesar de essa licao ainda nao
 * ter sido abordada. Isso se deve, provavelmente 
 * a uma mudanca na forma que a funcao time() eh 
 * executada, tomando um ponteiro como argumento.*/

/* APARENTEMENTE SE INICIALIZA UMA VARIAVEL
 * ESTATICA COM VALOR ESTATICO, NUNCA COM
 * VARIAVEL. SINTO RAIVA*/

unsigned int aleat()
{
    time_t *t;
    unsigned long int tempo = time(t);
    unsigned int semente = tempo%1000;
    // Nao compreendi a necessidade do ponteiro
    // t na execucao da funcao time(). Tampouco
    // tenho certeza se esse eh seu uso correto.
    static unsigned int s = 1234;
    auto   unsigned int n = s%100;
    s += s/10;

    return n;
}


int main(){
    //printf("%lu\n", tempo);
    printf("%u\n",aleat());
    printf("%u\n",aleat());
    return 0;
}
