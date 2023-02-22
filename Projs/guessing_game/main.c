/* Jogo Adivinhação.
 * computador joga, eu jogo.
 * Se ele acerta meu chute ele ganha.
 * Se ele erra meu chute eu ganho.
 * Serão um número de n partidas.
 * Ele vai prever o seguinte:
 *
 * Joguei 1, na partida anterior também
 * Joguei 1, na partida anterior não
 * Joguei 0, na partida anterior também
 * Joguei 0, na partida anterior não
 *
 * Vou ter que manter um historico da
 * última jogada, e um placar pra
 * "qual caso é esse"
 *
 * O computador jogará aleatoriamente
 * para casos sem vantagem e para a 
 * primeira partida. 
 * */

# include <stdio.h>
# include <stdlib.h>
# include <time.h>
# include "helper.h"
# include "messages.c"
# define LENGHT 25

int main(void){
    User_Stats User = {
        0, 0, "", 0, 0
    };

    srandom(time(NULL));

    Comp_info Comp = {
        0, 0, 0, 0, 0, 0, 0, "", 0
    };
    
    //Fazer verificação pesada
    //de dados. Fazer uma espécie
    //de segurança de input.
    puts(inicio);
    puts(turns);
    scanf("%d",&Comp.n_turns);
    puts(begin_duel);
    puts(ask_name);
    scanf("%s",User.name);
    /*
    while (!User.confirm){
        puts(turns);
        scanf("%d",&Comp.n_turns);
        puts(check_0);
        printf("%d\n",Comp.n_turns);
        puts(check_1);
        scanf("%hd",&User.confirm);
    }
    User.confirm = 0;
    puts(begin_duel);
    while (!User.confirm){
        puts(ask_name);
        scanf("%s",User.name);
        puts(check_0);
        printf("%s\n",User.name);
        puts(check_1);
        scanf("%hd",&User.confirm);
    }
    */
    while (!(Comp.actual_turn == Comp.n_turns)){
        Comp.guess = guess(&Comp, &User.turn_1);
        printf("\nFaça sua %d Jogada:", Comp.actual_turn+1);
        scanf("%hd", &User.turn_1);
        printf("%s = %hd Máquina = %hd\n", 
                User.name, User.turn_1, Comp.guess);
        if (Comp.guess == User.turn_1)
            Comp.points++;
        else
            User.points++;

        analyse(&User, &Comp);
        User.turn_0 = User.turn_1;
        Comp.actual_turn ++;
        placar(&User, &Comp);
    }
    if (User.points < Comp.points)
        puts("Máquina vence\n");
    else
        printf("%s é o vencedor!!!\n", User.name);
    return 0;
}
