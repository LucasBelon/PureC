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
# define INICIO_MIN 97
# define FIM_MIN 122
# define INICIO_MAI 65 
# define FIM_MAI 90
# define OFFSET 32

void maiuscula(int *l){
    *l -= OFFSET;
}

void minuscula(int *l){
    *l += OFFSET;
}


void converte(int *l, char *sinal){
    if(*l>=INICIO_MIN && *l<=FIM_MIN)
        if(*sinal=='+') 
            maiuscula(l);
    if(*l>=INICIO_MAI && *l<=FIM_MAI)
        if(*sinal=='-')
            minuscula(l);
}

void leitura_stdin(char sinal){
    int c=getchar();

    while(c!=EOF){
        converte(&c,&sinal);
        fprintf(stdout,"%c",c);
        c=getchar();
    }
}

int main(int argc, char **argv){
    if (argc!=2 || 
            (**(argv+1)!='+' &&
             **(argv+1)!='-'))
    {
        puts("Ocorreu um erro no\n\
        \rargumento passado ao programa\n");
        exit(1);
    }
    leitura_stdin(**(argv+1));
    return 0;
}
