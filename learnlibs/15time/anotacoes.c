/* Esta biblioteca define duas macros, declara
 * quatro tipos, e várias funções para se
 * manipular o tempo. */

# include <stdio.h>
# include <stdlib.h>

int main(void){
    // Componentes do tempo pg 434
    /* As macros definidaa são NULL e
     * CLOCKS_PER_SECOND, que é o número por
     * segundo retornado pela função clock().
     * */

    /* Os tipos definidos são: size_t, clock_t,
     * time_t e uma estrutura struct tm.
     * Essa última armazena as informações do que
     * é chamado tempo de calendário, ou
     * broken-down time. A estrutura deve conter,
     * ao menos e em qualquer ordem, os elementos
     * abaixo. A semântica e abrangência de cada
     * elemento é descrito nos comentários
     * abaixo:
     *
     * int tm_sec; // Segundos após o minuto. 
     * // [0,61]
     * int tm_min; // Minutos após a hora.
     * // [0,59]
     * int tm_hour; // Horas após a meia noite.
     * // [0,23]
     * int tm_mday; // Dias do mês. 
     * // [1,31]
     * int tm_mon; // Mês desde janeiro.
     * // [0,11]
     * int tm_year; // Anos desde 1900.
     * // 
     * int tm_wday; // Dias desde domingo.
     * // [0,6]
     * int tm_yday; // Dias desde janeiro,1
     * // [0,365]
     * int tm_isdst; // Daylight Saving time.
     * Horário de verão. 
     * Valor positivo para horário de verão, zero
     * para horário normal, negativo se a
     * informação não estiver disponível.
     * */


    // Funções de manipulação do tempo


    // Funções de conversão de tempo



    return 0;
}



