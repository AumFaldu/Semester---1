#include <stdio.h>

void main()
{
    char c;
    printf("Enter a character : ");
    scanf("%c",&c);
    if(c<=90 && c>=65)
    {
        printf("Entered character is Uppercase");
    }
    else if(c<=122 && c>=97)
    {
        printf("Entered character is Lowercase");
    }
    else if(c<=57 && c>=48)
    {
        printf("Entered character is Digit");
    }
    else
    {
        printf("Entered character is Special Symbol");
    }


}
