#include<stdio.h>
void main()
{
    int i=1,h[5],w[5],count=0;
    for(i=0;i<5;i++)
    {
        printf("Enter Height of person %d : \n",i);
        scanf("%d",&h[i]);
        printf("Enter Weight of person %d : \n",i);
        scanf("%d",&w[i]);
        if(h[i]>170 && w[i]<50)
        {
            count = count + 1;
        }
    }
    printf("Count = %d",count);
   
}

