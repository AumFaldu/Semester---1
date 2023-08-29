#include<stdio.h>
#include<math.h>

void main()
{
    float a,b,c,d,real,imaginary;
    //i = sqrt(-1)
    printf("The quadratic equation is in the form : ax^2 + bx + c = 0 \n");
    printf("Enter the value of a : \n");
    scanf("%f",&a);
    printf("Enter the value of b : \n");
    scanf("%f",&b);
    printf("Enter the value of c : \n");
    scanf("%f",&c);
    d = b*b - 4*a*c;
    real = ((-1)*b)/(2*a);
    imaginary = (sqrt((-1)*d))/(2*a);
    if(d == 0)
    {
        printf("Roots are real and equal \n");
        printf("The roots are :  %f",((-1)*b)/(2*a));
    }
    if(d > 0)
    {
        printf("Roots are real and unequal \n");
        printf("First root : %f \n",(((-1)*b)+sqrt(d))/(2*a));
        printf("Second root : %f \n",(((-1)*b)-sqrt(d))/(2*a));
    }
    if(d<0)
    {
         printf("Roots are unreal and not possible \n");
         printf("First Root : %f + i(%f) \n",real,imaginary);
         printf("Second Root : %f - i(%f) \n",real,imaginary);
    }
}
