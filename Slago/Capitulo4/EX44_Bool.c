/* Crie o arquivo boolean.h com as definicoes
 * necessarias para que o programa a seguir 
 * possa produzir a saida true false true.*/

# include <stdio.h>
# include "boolean.h"

int main(){
    printf("%s ", bool(not false));
    printf("%s ", bool(false and true));
    printf("%s ", bool(true or false));
    return 0;
}
