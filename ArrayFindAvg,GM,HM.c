#include <stdio.h>
#include<math.h>
void main()
{
    int i,n,sum=0,x=1;
    float y=0,avg,geo,har=0;
    printf("Enter value of n : ");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        printf("Enter %d number : ",i);
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        sum = sum + a[i];
    }
    avg=sum/(float)n;
    for(i=0;i<n;i++)
    {
        x = x*a[i];
    }
    geo = pow(x,1/(float)n);
    for(i=0;i<n;i++)
    {
        har = har + 1/(float)a[i];
        
    }
    har= (float)n/har;
    printf("Average = %.5f\n",avg);
    printf("Geometric Mean = %.5f\n",geo);
    printf("Harmonic Mean = %.5f\n",har);
    
}
