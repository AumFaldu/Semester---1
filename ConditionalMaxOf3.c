#include<stdio.h>
void main()
{
	int a,b,c,d;
	printf("Enter first integer : \n");
	scanf("%d",&a);
	printf("Enter second integer : \n");
	scanf("%d",&b);
	printf("Enter third integer : \n");
	scanf("%d",&c);
	d = (a>b)?(a>c?a:c):(b>c?b:c);
	printf("Maximum Integer is %d",d);
}
