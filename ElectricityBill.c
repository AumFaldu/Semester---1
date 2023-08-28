#include <stdio.h>

void main()
{
    float unit,bill;
    printf("Enter  total Electricity Units used : ");
    scanf("%f",&unit);
    if(unit<=50)
    {
        bill = unit*(0.50);
    }
    else if(unit<=150)
    {
        bill = 25 + (unit-50)*(0.75);
    }
    else if(unit<=250)
    {
        bill = 100 + ((unit-150)*(1.20));
    }
    else if(unit>250)
    {
        bill = 220 + ((unit-250)*(1.50));
    }
    bill = bill + unit*(0.20);
    printf("bill = %f",bill);
}
