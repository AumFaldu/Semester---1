#include<stdio.h>
void main()
{
	int a,mul,div;
	printf("Enter an integer : ");
	scanf("%d",&a);
	mul = a<<1;
	div = a>>1;
	printf("Multiplied answer is : %d \n",mul);
	printf("Divided answer is : %d",div);
}
