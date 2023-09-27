#include <stdio.h>
void main() 
{
    int i,n,avg=0,sum=0,count=0;
    printf("Enter how many numbers you want to enter : ");
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        printf("Data %d = \n",i);
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        sum = sum + arr[i];
    }
    avg = sum/n;
    for(i=0;i<n;i++)
    {
        if(avg<arr[i])
        {
            count = count + 1;    
        }
    }
    printf("Total Numbers greater than average = %d",count);
}
