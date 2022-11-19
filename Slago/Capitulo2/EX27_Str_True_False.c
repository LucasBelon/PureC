/* Codifique uma instrucao para exibir valores logicos
 * como True e False. para o valor '0' deve aparecer
 * False e True para qualquer outro.*/

# include <stdio.h>

int main(){
    int valor_tf;
    printf("Digite um valor:\n");
    scanf("%d",&valor_tf);
    printf("O valor digitado eh %s\n",valor_tf?"True":"False");
    return 0;
}
