#include <stdio.h>  
void main ()  
{  
    int i=0,n,temp=0,j;
    printf("Enter value of n : ");
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        printf("Enter value of %d element : ",i);
        scanf("%d",&arr[i]);
    }
    printf("\nAfter reversing : ");
    if(n%2==0)
    {
    for(i=0;i<n/2;i++)
    {
          temp = arr[i];
          arr[n-i-1] = arr[i];
          arr[n-i-1] = temp;
         
    }
    }
    else
    {
         for(i=0;i<(n+1)/2;i++)
    {
          temp = arr[i];
          arr[n-i-1] = arr[i];
          arr[n-i-1] = temp;
    }
    }
}  
