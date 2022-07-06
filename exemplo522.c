/* Inicializando e exibindo um menu de opções.
 * Um dos argumentos do tamanho da matriz pode
 * ser omitido*/

#include <stdio.h>

int main(void) {
  static char menu[][7] = { "abrir",
                            "editar",
                            "salvar", 
                            "sair"};
  int i;
  for (i = 0; i < 4; i++)
    puts(menu[i]);
}
