# define TABULEIRO '0'
# define TAB_JOGADOR '+'
# define BOMBA '*'
# define BORDA '#'
# define randomico rand


#ifndef UTILS_H
# define UTILS_H

void inicializa_campo();

void visualiza_campo();

void insere_bomba();

int numero_bombas_contorno();

void marca_N_bomba_contorno();

int mostra_personalizado();

#endif
