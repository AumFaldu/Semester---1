#include<stdio.h>
void main()
{
    int i=1,n,pos=0,neg=0;
    printf("Enter how many numbers you want : ");
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        printf("Enter data %d : \n",i);
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]>=0)
        {
            pos = pos + 1;
        }
        else
        {
            neg = neg + 1;
        }
    }
    printf("Positive Numbers = %d\n",pos);
    printf("Negative Numbers = %d",neg);
    
}

