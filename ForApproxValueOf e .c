#include <stdio.h>
void main()
{
    float f=1,e=0,a=1;
    int i,j,n;
    printf("Estimate value of e till : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        f = f*a;
        a++;
        for(j=1;j<=i;j++)
        {
            e = e + 1.0/f;
        }
    }
    printf("e = %f",e);
}
