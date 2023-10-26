#include<stdio.h>
void SI(float,float,float);
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
void SI(float p,float r,float t)
{
    printf("Simple Interest = %f",(p*r*t)/100.0);
}

