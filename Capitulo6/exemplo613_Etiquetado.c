/* Um meio bastante conveniente de se usar uma 
 * união é criar uma estrutura contendo dois 
 * campos: a união propriamente dita e uma etiqueta, 
 * que especifica qual membro da união está sendo 
 * usado. Para cada membro da união, deve ser 
 * associado um valor distinto correspondente a sua 
 * etiqueta Através da etiqueta, em qualquer 
 * instante, o programador tem como saber exatamente 
 * qual membro da união está ativo. Isso evita que 
 * um valor seja inadvertidamente armazenado num 
 * formato e recuperado em outro.*/


# include <stdio.h>

typedef struct {
    int etiqueta;

    union {
        char a;  /* 1 */
        int b;   /* 2 */ 
        float c; /* 3 */
    } valor;

} mutante;


int main(void){
    mutante variavel;
    variavel.etiqueta = 2;
    variavel.valor.a = 2;
    printf("%d\n", variavel.valor.b);
    // Apesar de atribuirmos ao membro 
    // 'a' da uniao, o valor eh acessivel
    // pela variavel b se usarmos a formatacao
    // de decimal no printf.
    // Se atribuirmos em c nao temos esse comportamento
    return 0 ;
}
