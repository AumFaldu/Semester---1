#include <stdio.h>
void main() 
{
    int i=1,n;
    printf("Enter last number : ");
    scanf("%d",&n);
    do
    {
        printf(" %d ",i);
        i = i + 2;
    }while(i<=n);
}
