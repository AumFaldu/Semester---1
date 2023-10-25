#include<stdio.h>
float SI(float p,float r,float t);
void main()
{
    float p,r,t;
    printf("Enter Principle : ");
    scanf("%f",&p);
    printf("Enter Rate : ");
    scanf("%f",&r);
    printf("Enter Time : ");
    scanf("%f",&t);
    SI(p,r,t);
}
float SI(float p,float r,float t)
{
    printf("Simple Interest = %f",(p*r*t)/100.0);
}

