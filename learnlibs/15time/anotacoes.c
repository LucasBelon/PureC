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
     * int tm_yday; // Dias desde primeiro de 
     * // janeiro [0,365]
     * int tm_isdst; // Daylight Saving time.
     * Horário de verão. 
     * Valor positivo para horário de verão, zero
     * para horário normal, negativo se a
     * informação não estiver disponível.
     * */


    // Funções de manipulação do tempo

    /* clock_t clock(void)
     *
     * Determina o tempo usado pelo computador.
     * Detalhe: conta o número de ciclos, se
     * trata do clock do processador.
     * Retorna a melhor aproximação do tempo
     * usado pelo processador. Para determinar o
     * tempo em segundos, o retorno de clock()
     * deve ser dividido por CLOCKS_PER_SECOND.
     * Se o tempo do processador não estiver
     * disponível, é retornado (clock_t)-1
     * */


    /* double difftime(time_t time1,
     * time_t time0)
     *
     * Computa a diferença entre dois tempos de
     * calendário. 
     * Retorna a diferença expressa em segundos e
     * representada como double.
     * */


    /* time_t mktime(struct tm *timeptr)
     *
     * Converte o tempo local de timwptr para o
     * mesmo formato que time_t.
     * Retorna a melhor representação do tempo de
     * calendário representado como time_t.
     * exemplo: Que dia da semana é 4 de julho de
     * 2001?
     *
    #include <stdio.h>
    #include <time.h>
    static const char *const wday[] = {
        "Sunday", "Monday", "Tuesday", 
        "Wednesday", "Thursday", "Friday",
        "Saturday", "-Unknown-"};
    struct tm time_str;

    time_str.tm_year = 2001 - 1900;
    time_str.tm_mon = 7 - 1;
    time_str.tm_mday = 4;
    time_str.tm_hour = 0;
    time_str.tm_min = 0;
    time_str.tm_sec = 0;
    time_str.tm_isdst = -1;
    if (mktime(&time_str) == -1)
        time_str.tm_wday = 7;
    printf("%s\n",wday[time_str.tm_wday]);
     * */


    /* time_t time(time_t * timer)
     *
     * Determina o tempo de calendário corrente.
     * O encoding é indeterminado.
     * Retorna a melhor representação para o
     * tempo de calendário atual. Se timer não é
     * um ponteiro nulo, então armazena nele
     * também o retorno.
     * */


    // Funções de conversão de tempo

    /* char *asctime(const struct tm *timeptr)
     *
     * Converte struct tm na string com o 
     * seguinte formato:
     * "Sun Sep 16 01:03:52 1973\n\0"
     * */


    /* char *ctime(const time_t *timer)
     *
     * converte o tempo calendário de time para
     * local time. Equivalente a
     * asctime(localtime (timer) )
     * */


    /* struct tm *gmtime(const time_t *timer)
     *
     * Converte o tempo de calendário de timer
     * para broken-down representado em utc.
     * Retorna um ponteiro para o objeto.
     * */


    /* struct tm *localtime(const time_t *timer)
     *
     * converte o calendário timer em broken-down
     * Retorna um ponteiro para o objeto.
     * */


    /* size_t strftime(char *s,
     * size_t maxtime,
     * const char *format,
     * const struct tm *timeptr)
     *
     * Adiciona caracteres na string s,
     * controlados pela string format, a qual
     * deve ser uma sequência de caracteres
     * multibyte. Maxsize limita o tamanho da
     * array s. 
     *
     * Os especificadores de formato são:
     *
     * "%a" É substituído pelo dia da semana
     * abreviada do locale.
     *
     * "%A" É substituído pelo dia da semana
     * completo do locale.
     *
     * "%b" É substituído pelo nome do mês
     * abreviado do locale.
     *
     * "%B" É substituído pelo nome do mês
     * completo do locale.
     *
     * "%c" É substituído pela representação 
     * adequada ao locale da data e hora.
     *
     * "%d" É substituído pelo dia do mês como
     * número decimal (01-31)
     *
     * "%El" É substituído pela hora (relógio de
     * 24 horas) como número decimal (00-23)
     *
     * "%I" É substituído pela hora (relógio de
     * 12 horas) como número decimal (01-12)
     *
     * "%j" É substituído pelo dia do ano como
     * número decimal (001-366)
     *
     * "%m" É substituído pelo mês como número
     * decimal (01-12)
     * 
     * "%M" É substituído pelo minuto como número
     * decimal (00-59)
     * 
     * "%p" É subtituído pelo equivalente às
     * designações AWM do locale associadas à um
     * relógio 12 horas.
     *
     * "%S" É substituído pelo segundo como
     * número decimal (00-61)
     *
     * "%U É substituído pelo número da semana
     * do ano (o primeiro domingo como o primeiro
     * dia da semana 1) como número decimal 
     * (00-53)
     *
     * "%w" is replaced by the weekday as a 
     * decimal number (0-6). where Sunday is 0.
     *
     * "%W" is replaced by the week number of the
     * year (the first Monday as the first day of 
     * week 1) as a decimal number (00-53).
     *
     * "%x" is replaced by the locale's 
     * appropriate date representation.
     *
     * "%X" is replaced by the locale's 
     * appropriate time representation.
     *
     * "%yW is replaced by the year without
     * century as a decimal number (00-99).
     * 
     * "%Y" is replaced by the year with century 
     * as a decimal number.
     *
     * "%Z" is replaced by the time zone name or
     * abbreviation, or by no characters if no 
     * time zone is determinable.
     *
     * "%%" is replaced by %. 
     * */


    return 0;
}



