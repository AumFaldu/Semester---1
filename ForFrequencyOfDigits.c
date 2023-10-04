#include <stdio.h>
void main()
{
    int n,i=0,dig=0,j,k,count=0;
    printf("Enter a number : ");
    scanf("%d",&n);
    j=n;
    for(dig=0;n!=0;dig++)
    {
        n/=10;
    }
    int arr[dig];
    for(i=0;i<dig;i++)
    {
        arr[i] = j%10;
        j/=10;
    }
    for(k=0;k<=9;k++)
    {   count = 0;
        for(i=0;i<dig;i++)
        {
            if(arr[i] == k)
            {
                count = count + 1;
            }
        }
        printf("Frequency of %d = %d\n",k,count);
    }
}
