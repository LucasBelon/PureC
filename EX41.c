/* Inclua diretivas #define no programa a seguir de modo
 * que ele possa ser compilado corretamente*/

# include <stdio.h>

# define programa int main()
# define inicio {
# define diga printf
# define fim }
# define quad(n) ((n)*(n))
# define input scanf

programa
inicio
int n;
diga("ola");
diga("\nVou elevar ao quadrado:\n");
input("%d",&n);
diga("Resultado:%d\n",quad(n));
fim
