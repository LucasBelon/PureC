/* Uma funcao recursiva descontrolada
 * sem criterio de parada*/

# include <stdio.h>

void loop(void)
{
    printf("LOOP ");
    loop();
}


int main(){
    loop();
    return 0;
}
