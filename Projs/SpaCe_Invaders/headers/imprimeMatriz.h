# ifndef IMPRIMEMATRIZ_H
# define IMPRIMEMATRIZ_H

/* (None) -> char ** matriz
 * Cria um buffer, a ser acessado por ponteiros.
 * Retorna o ponteiro que aponta para os outros ponteiros.*/
char **
criaBufferMatriz(void);


/* (char ** matriz) -> None
 * Como a matriz é criada no heap, e controlada por 
 * ponteiros inicializa-se os caracteres que dão forma à
 * matriz.*/
void 
iniciaCaractereMatriz(char ** matriz);


/* (char ** matriz) -> None
Imprime a matriz do jogo.
Cada posição da matriz é um caracter e deve
ser impresso exatamente com o valor dele.*/ 
void
imprimeMatriz(char ** matriz);

# endif // !IMPRIMEMATRIZ_H
