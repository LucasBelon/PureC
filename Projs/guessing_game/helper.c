# include "helper.h"

/*     FUNÇÕES      */

// Estou passando um ponteiro de estrutura
short guess(Comp_info * Comp, short * turn){
    if (Comp->actual_turn <= 1){
        Comp->guess = random()%2;
        return Comp->guess;
    }
    if (*turn == 0){
        if (Comp->J00 == Comp->J01)
            Comp->guess = random()%2;
        else if (Comp->J01 > Comp->J00)
            Comp->guess = 1;
        else
            Comp->guess = 0;
    }
    if (*turn == 1){
        if (Comp->J10 == Comp->J11)
            Comp->guess = random()%2;
        else if (Comp->J11 > Comp->J10)
            Comp->guess = 1;
        else
            Comp->guess = 0;
    }
    return Comp->guess;
}

void analyse(User_Stats * User, Comp_info * Comp){
    if (User->turn_0)
        if (User->turn_1)
            Comp->J11 ++;
        else
            Comp->J10 ++;
    else
        if (User->turn_1)
            Comp->J01 ++;
        else
            Comp->J00 ++;
}

void placar(User_Stats * User, Comp_info * Comp){
    printf("%s:", User->name);
    for(int i = 0; i < User->points; i++)
        putchar('*');
    putchar('\n');
    printf("Máquina:");
    for(int i = 0; i < Comp->points; i++)
        putchar('*');
    putchar('\n');
}
