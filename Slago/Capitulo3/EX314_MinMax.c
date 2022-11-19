/* Dada uma serie de numeros positivos 
 * (finalizada com um valor nulo) que
 * representam as idades das pessoas
 * que moram num certo bairro. Determine
 * a idade da pessoa mais nova e da pessoa
 * mais velha.*/

/* Obs do Programador:
 * Para fazer um exercicio desses seria
 * necessario o entendimento acerca de
 * vetores. Assim, nao eh possivel testar
 * se o exercicio esta feito corretamente
 *
 * Obs do Programador do futuro:
 * Se eu mantiver um loop pedindo novas idades,
 * eu posso ir comparando com a menor idade atual
 * e colocar o valor 0 como criterio de interrupcao
 * do loop*/

# include <stdio.h>

int main(){
    int maior, menor, atual;
    printf("Digite a idade: "); scanf("%d", &atual);
    maior = menor = atual;
    do {
        if (atual > maior) maior = atual;
        if (atual < menor) menor = atual;
        printf("Digite a idade ou zero para parar: "); scanf("%d", &atual);
    } while (atual);
    printf("Dentre as idades a menor eh %d e a maior %d", menor, maior);
    return 0;
}
