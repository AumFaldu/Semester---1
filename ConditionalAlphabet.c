#include<stdio.h>

void main()
{
    char a,c;
    printf("Enter an alphabet : ");
    scanf("%c",&c);
    a = ((c>='a'&& c<='z')||(c>='A'&& c<='Z'))?printf("Entered alphabet is a vowel"):printf("Entered character is a consonant");
}
