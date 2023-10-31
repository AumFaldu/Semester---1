#include<stdio.h>
void prime(int n)
{
    int i=1,count=0;
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            count++;
        }
        
    }
        if(count == 2)
        {
            printf("\nIs a Prime Number");
        }
        else
        {
            printf("\nNot a Prime Number");
        }
    
}
void armstrong(int n)
{
    int i,dig=0,j,k,sum=0,p=1,l;
    j=n;
    for(i=0;j!=0;i++)
    {
        j/=10;
        dig++;
    }
    l=n;
    for(i=0;n!=0;i++)
    {
        for(k=1;k<=dig;k++)
        {
            p = p*(n%10);
            
        }
            sum = sum + p;
        p=1;
        n/=10;
        
    }
    if(sum == l)
    {
        printf("\nIs an Armstrong Number");
    }
    else
    {
        printf("\nNot an Armstrong Number");
    }
    
}
void perfect(int n)
{
    int i=1,count=0;
    for(i=1;i<n;i++)
    {
        if(n%i==0)
        {
            count = count + i;
        }
    }
    if(count == n)
    {
        printf("\nIs a Perfect Number");
    }
    else
    {
        printf("\nNot a Perfect Number");
    }
}
