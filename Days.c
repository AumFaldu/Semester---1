#include<stdio.h>
void main()
{
    int day,week,d,year;
    printf("Enter number of days : ");
    scanf("%d",&d);
    year = d/365;
    week = (d - (year*365))/7;
    day = d - year*365 - week*7;
    printf("Year:Week:Day = %d:%d:%d",year,week,day);
    
}
