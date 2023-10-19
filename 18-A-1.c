#include<stdio.h>
int add();
void main()
{
    add();
}
int add()
{
      int a,b;
    printf("Enter integer 1 : ");
    scanf("%d",&a);
    printf("Enter integer 2 : ");
    scanf("%d",&b);
    printf("Sum = %d",a+b);
    
}
