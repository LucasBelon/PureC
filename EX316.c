/* Faca um programa que calcule o saldo de uma conta bancaria
 * tendo como entrada o saldo inicial, e uma serie de operacoes
 * de credito e/ou debito finalizada com o valor zero.
 * o programa deve apresentar como saida o total de creditos,
 * de debitos, a C.P.M.F paga (0,35% do total de debitos) e
 * o saldo final. Veja o exemplo:
 *
 * Saldo inicial: R$1000.00
 *
 * operacao? -200.00
 * operacao?  +50.00
 * operacao? -320.00
 * operacao?  100.00
 * operacao? 0
 *
 * Total de creditos ....: R$ 150.00
 * Total de debitos .....: R$ 520.00
 * C.P.M.F. paga ........: R$   1.82
 * Saldo final ..........: R$ 628.18
 * */

# include <stdio.h>

int main(){
    float saldo_i, tot_debitos=0,\
        tot_creditos=0, cpmf,\
        saldo_f, operacao;
    
    cpmf = 0.35/100;

    printf("Saldo Inicial: R$");
    scanf("%f", &saldo_i);
    printf("\n");

    do {
        printf("operacao? ");
        scanf("%f",&operacao);
        if (operacao > 0) tot_creditos += operacao;
        else if (operacao < 0) tot_debitos -= operacao;
    }
    while (operacao!=0);
    printf("%f\n",tot_debitos);
    cpmf = cpmf*tot_debitos;
    printf("%f\n",tot_debitos);
    
    saldo_f = saldo_i \
            - tot_debitos \
            + tot_creditos \
            - cpmf;

    
    printf(\
"\n\
Total de creditos ....: R$%4.2f\n\
Total de debitos .....: R$%4.2f\n\
C.P.M.F. paga ........: R$%4.2f\n\
Saldo final ..........: R$%4.2f\n",\
tot_creditos, \
tot_debitos, \
cpmf, \
saldo_f \
    );

    return 0;
}
