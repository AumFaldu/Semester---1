#include<stdio.h>
void main()
{
    int i,x,y,ans=1;
    printf("Enter Base : ");
    scanf("%d",&x);
    printf("Enter Exponent : ");
    scanf("%d",&y);
    for(i=1;i<=y;i++)
    {
        ans = ans*x;
    }
    printf("Answer = %d",ans);
}
