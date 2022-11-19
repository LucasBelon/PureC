/* This program will introduce a new operation, "->"
 * It's a way to simplify a couple of operations. */

# include <stdio.h>

int day_of_year(ad) /* It finds the day of the year from day and month*/
struct data *ad ;
{
    int i, day, leap_year ;
    
    day = ad->day ;
    leap_year = ad->year % 4 == 0 && ad->year % 100 != 0 || ad->year % 400 ;
    for (i = 1 ; i < ad->month ; ++i){
        day += tab_day[leap_year][i] ;
    }
    return(day)
}

int main(){
        
    return 0 ;
}
