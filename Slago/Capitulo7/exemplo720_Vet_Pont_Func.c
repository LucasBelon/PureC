/* Usando um vetor de ponteiros para funcoes. */


# include <stdio.h>

void  abrir(void) { puts("Abrindo...\n" ); }
void editar(void) { puts("Editando...\n"); }
void salvar(void) { puts("Salvando...\n"); }
void fechar(void) { puts("Fechando...\n"); }

int main(void){
    static void (*f[])(void) = \
        {abrir, editar, salvar, fechar};
    int i;
    do {
        printf(
         "0. Abrir\n\
        \r1. Editar\n\
        \r2. Salvar\n\
        \r3. Fechar\n\
        \rOpcao: "
        );
        scanf("%d", &i);
        if ( i>=0 && i<=3)
            //f[i]();
            (*f+i)();
            //(**(f+i))();
    } while (i!=3);

    return 0 ;
}
/* A declaracao (*f[])(void) cria um vetor f
 * cujos elementos sao ponteiros para funcoes 
 * do tipo void que nao recebem argumentos.
 * Entao a instrucao f[i]() chama a funcao cujo
 * endereco eh o i-esimo elemento do vetor f.
 *
 * Outra sintaxe possivel seria (*f+i)(), mas
 * nao eh tao elegante. Outra sintaxe tambem
 * possivel seria (**f+i)(), que eh ainda menos
 * elegante e legivel. 
 * Nesse ultimo caso estamos chamando o ponteiro
 * que aponta para um ponteiro (No vetor) que 
 * aponta para o endereco de um bloco de instrucoes
 * ( uma funcao ). O operador de chamada de funcao
 * nao ve diferenca entre chamar o endereco ou o 
 * ponteiro que aponta para o endereco para executar
 * um bloco de instrucoes. */
