#include <stdio.h>
void main() 
{
    int i,n,j,count=0;
    printf("Enter value of n : ");
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        printf("%d Number = ",i);
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(arr[i]==arr[j])
            {
                count = count + 1;
                break;
            }
        }
    }
    printf("Total Duplicate elements = %d",count);
}
