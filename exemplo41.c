/* Definindo Constantes simbolicas. O preprocessador
 * realmente altera pedaços do codigo como se este 
 * fosse texto plano*/

# include <stdio.h>
# define diga printf
# define oi "Ola, tudo bem?\n"
int main(){
    diga(oi);
    return 0;
}
