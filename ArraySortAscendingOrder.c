#include<stdio.h>
void main()
{
    int i,j,temp,n;
    printf("Enter value of n : ");
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        printf("%d number = ",i);
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(arr[i]>arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    printf("\n");
    for(i=0;i<n;i++)
    {
        printf("%d number = %d\n",i+1,arr[i]);
    }
    
}
