#include<stdio.h>
void main()
{
    int i=1,n,even=0,odd=0;
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
        if(arr[i]%2==0)
        {
            even = even + 1;
        }
        else
        {
            odd = odd + 1;
        }
    }
    printf("Even Numbers = %d\n",even);
    printf("Odd Numbers = %d",odd);
    
}

