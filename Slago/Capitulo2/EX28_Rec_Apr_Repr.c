/* Numa faculdade, os alunos com media pelo menos 7 sao
 * aprovados, aqueles com media inferior a 3 sao reprovados
 * e os demais ficam de recuperacao. Dadas as duas notas de
 * um aluno, informe sua situacao.*/

# include <stdio.h>

int main(){
    float nota1, nota2, media;
    printf("Informe as duas notas para saber sua situacao:\n");
    scanf("%f %f",&nota1, &nota2);
    media = (nota1+nota2)/2;
    
    if (media>=7)
        printf("Voce foi aprovado! Parabens!");
    else if (media<3)
        printf("Voce foi reprovado. Eu nao queria ser voce...");
    else
        printf("Voce esta de recuperacao. Forca Guerreiro!");
    
    return 0;
}
