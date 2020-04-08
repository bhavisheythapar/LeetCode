#include <stdio.h>


void dayOfTheWeek (int day, int month, int year) {

    int base_year=1971;
    int base_month=1;
    int base_day=1;
    int years_past=0;
    int months_past=0;
    int days_past=0;
    int total_days_past=0;
    int month_multiplier=0;
    int remainder=0;

    years_past=year-base_year;
    months_past=month-base_month;
    days_past=day-base_day;

    if(month==1||month==3||month==5||month==7||month==8||month==10||month==12)
        month_multiplier=31;
    else if (month==4||month==6||month==9||month==11)
        month_multiplier=30;
    else
        month_multiplier=28;
    

    total_days_past=365*years_past+month_multiplier*months_past+days_past;

    remainder=total_days_past%7;

    if (remainder==0)
        printf("Friday");
    else if (remainder==1)
        printf("Satruday");
    else if (remainder==2)
        printf("Sunday");
    else if (remainder==3)
        printf ("Monday");
    else if (remainder==4)
        printf ("Tuesday");
    else if (remainder==5)
        printf ("Wedneday");
    else if (remainder==6)
        printf ("Thursday");

}

int main (void) {
    int day=23;
    int month=11;
    int year=1971;
    dayOfTheWeek(day,month,year);
}