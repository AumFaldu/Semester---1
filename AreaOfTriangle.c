#include<stdio.h>
void main()
{
    float base,height,Area;
    printf("Enter value of base of triangle : ");
    scanf("%f",&base);
    printf("Enter value of height of triangle : ");
    scanf("%f",&height);
    Area = ((base*height)/2);
    printf("Area of triangle = %f",Area);
}
