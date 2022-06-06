/* o programa solicita duas notas obtidas
 * pelo aluno, calcula sua media e, em funcao
 * desse valor, decide se o aluno esta ou nao
 * aprovado*/

# include <stdio.h>

int main(){
    float a, b, m;

    printf("Informe as duas notas obtidas:\n");
    scanf("%f %f",&a, &b);

    m = (a+b)/2;

    if(m >= 7){
        printf("Aprovado\n");
    }
    else{
        printf("Reprovado\n");
    }
    return 0;
}
