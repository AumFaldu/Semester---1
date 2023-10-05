#include<stdio.h>
#include<string.h>
void main()
{    
    char str[100];
    int i = 0;
    
        printf("Enter a string : ");
        scanf("%s",str);
        printf("\n %s",str);
        for(i=0;str[i]!='\0';i++);
        printf("\nLength of string = %d",i);
        
}
