#include<stdio.h>
void main()
{
	char a;
	printf("Enter a character : ");
	scanf("%c",&a);
	if(a == 'a' || a == 'e' || a == 'i' || a == 'o' || a == 'u')
	{
		printf("Entered character is vowel");
	}
	else
	{
		printf("Entered character is consonant");
	}
}
