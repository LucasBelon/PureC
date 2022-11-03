/* Exercício 8.2. Implemente um programa 
 * para ler um texto da entrada padrão,
 * convertê-lo em maiúsculas ou minúsculas
 * e exibi-lo na saída padrão. O tipo de
 * conversão deve ser especificado através 
 * de uma chave (+ para maiúscula ou − para 
 * minúscula), passada como argumento na 
 * linha de comandos.*/

# include <stdio.h>
# include <stdlib.h>
# define EOF '$'
# define INICIO_MIN 97
# define FIM_MIN 122
# define INICIO_MAI 65 
# define FIM_MAI 90
# define OFFSET 32

void maiuscula(char *l){
    *l -= OFFSET;
}

void minuscula(char *l){
    *l += OFFSET;
}


void converte(char *l, char *sinal){
    if(*l>=INICIO_MIN && *l<=FIM_MIN)
        if(*sinal=='+') 
            maiuscula(l);
    if(*l>=INICIO_MAI && *l<=FIM_MAI)
        if(*sinal=='-')
            minuscula(l);
}

void leitura_stdin(char sinal){
    char c;
    while((c=getchar())!=EOF){
        converte(&c,&sinal);
        fprintf(stdout,"%c",c);
    }
}

int main(int argc, char **argv){
    leitura_stdin(**(argv+1));
    return 0;
}
