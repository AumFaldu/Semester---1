#include<stdio.h>
void main()
{
    int i=1,n;
    printf("Enter how many numbers you want : ");
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        printf("Enter data %d : \n",i);
        scanf("%d",&arr[i]);
    }
    printf("Normal order : ");
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\nReverse Order : ");
    for(i=n-1;i>=0;i--)
    {
        printf("%d ",arr[i]);
    }
}

