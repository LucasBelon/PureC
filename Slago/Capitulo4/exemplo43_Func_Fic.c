/* Para definir uma funcao, empregamos a seguinte
 * forma basica:
 *
 * tipo nome(parametros)
 * declaracao dos parametros
 * {
 *  declaracoes;
 *  comandos
 * }
 * 
 * Lembrando que uma funcao int deve retornar um inteiro
 * nome(void) nao pode ser chamada com parametros
 * nome() pode ser chamada com parametros
 * Nao eh algo recomendavel, vai apitar na compilacao
 * que existem parametros demais, mas funciona
 * */

# include <stdio.h>

/* Funcao ficticia, apenas realiza um print*/
void sound(f)
    int f;
{
    /* Funcao ficticia*/
    printf(
    "Funcao sound chamada com parametro f=%d\n",f
    );

}


void delay(milisegundos)
    int milisegundos;
{
    /* Funcao ficticia*/
    printf(
    "Funcao delay chamada com \n\
    \rparametro milisegundos=%d\n",
    milisegundos
    );
}

void nosound(void)
{
    /* Funcao ficticia*/
    printf("Funcao nosound chamada \n");

}


void alarme(void)
{
    int f;
    for (f=100; f<=5000; f+=20){
        sound(f);
        delay(100);
    }
    nosound();
}

void parametros()
{
    printf("Funcao parametros chamada\n");
}

int main(){
    int confirma;
    printf(\
"digite 1 para testar as funcoes e 0 para encerrar:"\
    );
    scanf("%d", &confirma);
    if (confirma) alarme() ;
    parametros(confirma);
    return 0;
}
