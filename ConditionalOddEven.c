#include<stdio.h>
void main()
{
	int a,b;
	printf("Enter an integer : \n");
	scanf("%d",&a);
	b = (a % 2 == 0)?(printf("even")):(printf("odd"));
}
