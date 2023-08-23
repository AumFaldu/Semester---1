#include<stdio.h>
void main()
{
	int a,b,c;
	printf("Enter value of an integer : ");
	scanf("%d",&a);
	printf("Enter value of an integer : ");
	scanf("%d",&b);
	printf("Enter value of an integer : ");
	scanf("%d",&c);
	if(a>b)
	{
		if(a>c)
		{
			printf("Largest value is : %d",a);
		}
		else
		{
			printf("Largest value is : %d",c);
		}
		
	}
	else
	{
		if(b>c)
		{
			printf("Largest value is : %d",b);
		}		
		else
		{
			printf("Largest value is : %d",c);
		}
	}
}
