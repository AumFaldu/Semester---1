#include<stdio.h>
void main()
{
    int i=1,max,sum=0,min,n;
    float avg;
    printf("Enter how many numbers you want : ");
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        printf("Enter data %d : \n",i);
        scanf("%d",&arr[i]);
    }
    max = arr[0];
    min = arr[0];
    for(i=0;i<n;i++)
    {   
       if(max<arr[i])
       {
           max = arr[i];
       }
      
       if(min>arr[i])
       {
           min = arr[i];
       }
      sum = sum+arr[i];
    }
        avg = (float)sum/(float)n;
    printf("Average = %f\n",avg);
    printf("Sum = %d\n",sum);
    printf("Max = %d\n",max);
    printf("Min = %d\n",min);
}

