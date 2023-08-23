#include <stdio.h>
void main() 
{
    int a;
    printf("Enter value of integer : ");
    scanf("%d",&a);
    if((a & 1) == 1)
    {
        printf("The number is odd");
    }
    else
    {
        printf("The number is even");
    }
}
