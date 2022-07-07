/* Codifique um programa para criar uma 
 * variável de tipo anônimo, capaz de 
 * armazenar o título, o autor, a editora 
 * e o ano de publicação de um livro; 
 * atribuir valores aos seus campos e 
 * exibi-la no vídeo.*/

// anonimo=sem rotulo
// ainda nao se sabe ao certo qual a 
// necessidade do rotulo

# include <stdio.h>

int main(void){
    struct {
        char titulo[100];
        char autor[50];
        char editora[25];
        int ano;
    } INFO;
    strcpy(INFO.titulo, "Viagens na minha terra");
    strcpy(INFO.autor, "Almeida Garret");
    strcpy(INFO.editora, "Martin Claret");
    INFO.ano = 1846;
    
    printf(\
"Titulo:\t %s\n\
Autor:\t %s\n\
Editora: %s\n\
Ano:\t %d\n",\
    INFO.titulo,\
    INFO.autor,\
    INFO.editora,\
    INFO.ano\
    );
    return 0 ;
}
