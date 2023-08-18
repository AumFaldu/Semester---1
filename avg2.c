#include <stdio.h>
  
void main()
{
    float avg,a,b,c;
    printf("Enter first value : ");
    scanf("%f",&a);
    printf("Enter second value : ");
    scanf("%f",&b);
    printf("Enter third value : ");
    scanf("%f",&c);
  
    avg = (a+b+c)/3.0;
  
    printf("Average of 3 numbers is: %f", avg);
  
}
