/* Dadas as duas notas de um aluno
 * informe a sua media*/

# include <stdio.h>

int main(){

    float nota1, nota2;

    printf("informe as duas notas do aluno:\n");
    scanf("%f %f",&nota1, &nota2);
    /* Ao inves de armazenar o resultado, colocamos 
     * diretamente na funcao printf o procedimento de 
     * calculo de media de dois numeros.*/
    printf("\nA Media eh %.2f\n", (nota1+nota2)/2);

    return 0;
}
