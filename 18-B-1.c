#include<stdio.h>
void fibbo(int);
void main()
{
    int n;
   printf("Enter total number of digits = ");
   scanf("%d",&n);
   printf("Fibbonacci series : \n");
   fibbo(n);
}
void fibbo(int a)
{
    int i=0,t1=0,t2=1,next_term=0;
    printf("%d,",t1);
    printf("%d",t2);
    next_term= t1+t2; 
    for(i=2;i<a;i++)
    {
        printf(",%d",next_term);
      t1 = t2;
      t2 = next_term;
     next_term = t1+t2; 
    }
}
