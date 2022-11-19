/* Defina um tipo de estrutura, para representar
 * livros, contendo titulo, autor e ano de publicacao
 * Em seguida, codifique uma funcao para preencher
 * uma tal estrutura com dados obtidos via teclado.*/


# include <stdio.h>

typedef struct {
    char titulo[100];
    char autor[50];
    char editora[25];
    char ano[5];
} INFO;

void preenche_Estrutura(INFO* e)
{
    static const char info[][10] = {
        "o titulo",
        "o autor",
        "a editora",
        "o ano"
    };
    char string[100];
    for (int i = 0; i<4;++i) {
        printf(
        "Digite %s da obra (use _ como espaço): ", 
        info[i]);
        scanf("%s", string);
        switch(i){
        case 0: 
            strcpy(e->titulo, string);
            break;
        case 1: 
            strcpy(e->autor, string);
            break;
        case 2: 
            strcpy(e->editora, string);
            break;
        case 3: 
            strcpy(e->ano, string);
            break;
        }
    }
}


int main(void){
    INFO livro;
    preenche_Estrutura(&livro);
    //strcpy(livro.titulo, "Viagens na minha terra");
    //strcpy(livro.autor, "Almeida Garret");
    //strcpy(livro.editora, "Martin Claret");
    //strcpy(livro.ano, "1846");
    
    printf(
    "Titulo:\t %s\n\
    \rAutor:\t %s\n\
    \rEditora: %s\n\
    \rAno:\t %s\n",
    livro.titulo,
    livro.autor,
    livro.editora,
    livro.ano
    );
    return 0 ;
}
