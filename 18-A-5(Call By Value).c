//CALL BY VALUE
#include<stdio.h>
void swap(int,int);
void main()
{
    int a,b;
    printf("Enter value of a : ");
    scanf("%d",&a);
    printf("Enter value of b : ");
    scanf("%d",&b);
    swap(a,b);
}
void swap(int a,int b)
{
    a = a-b;
    b = a+b;
    a = b-a;
    printf("After swapping\n value of a = %d \n value of b = %d ",a,b);
}
