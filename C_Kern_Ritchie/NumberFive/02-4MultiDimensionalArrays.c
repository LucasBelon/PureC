/* This code is at page 101-102 of the book */

# include <stdio.h>

static int tab_day[2][13] = {
    {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31},
    {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}
} ;

int day_of_year(year, month, day) /* Finds the day of the year */
int year, month, day ; /* From the month and day of the month */
{
    int i, leap_year ;
    leap_year = year%4 == 0 && year%100 != 0 || year%400 == 0 ;
    for (i = 1; i < month ; ++i){
        day += tab_day[leap_year][i] ;
    }
    return (day) ;
}

void day_month(year, day_of_the_year, amonth, aday)
int year, day_of_the_year, *amonth, *aday ;
{
    int i, leap_year ;

    leap_year = year%4 == 0 && year%100 != 0 || year%400 == 0 ;
    for(i = 1; day_of_the_year > tab_day[leap_year][i]; ++i){
        day_of_the_year -= tab_day[leap_year][i] ;
    }
    *amonth = i ;
    *aday = day_of_the_year ;
}

int main(){
    return 0 ;
}

