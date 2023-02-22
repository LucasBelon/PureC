# ifndef HELPER_H
# define HELPER_H


# include <stdio.h>
# include <stdlib.h>

# define LENGHT 25

/* Qual a diferença entre nome e rótulo mesmo?
 * A diferença é que rótulo, primeiro campo, nos
 * permite declarar estruturas da seguinte
 * maneira
 *
 * struct nome variável;
 * 
 * Equanto rótulos nos permitem declarar da 
 * seguinte maneira:
 *
 * RÓTULO variável;
 *
 * Além disso, existem maneiras de definir 
 * estruturas que contém um ponteiro para uma
 * estrutura igual a ela mesma, como visto com
 * listas ligadas, e árvores.*/
typedef struct {
    short turn_0;
    short turn_1;
    char name[LENGHT];
    short points;
    short confirm;
} User_Stats ;


// Futuramente estudar possibilidade
// de usar bit fields para armazenar
// as informações binárias.
typedef struct {
    short J00;
    short J01;
    short J10;
    short J11;
    int n_turns;
    int actual_turn;
    short guess;
    char vencedor[LENGHT];
    short points;
} Comp_info ;


/*Protótipos de funções*/


short guess(Comp_info * Comp, short * turn);

void analyse(User_Stats * User, Comp_info * Comp);

void placar(User_Stats * User, Comp_info * Comp);

# endif 
