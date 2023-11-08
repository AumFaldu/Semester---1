#include<stdio.h>
struct s
{
    int hh;
    int mm;
    int ss;
}t1,t2,t3;
void main()
{
    int h,m,s;
    printf("Enter Seconds of time 1 : ");
    scanf("%d",&t1.ss);
    printf("Enter Seconds of time 2 : ");
    scanf("%d",&t2.ss);
    printf("Enter Minutes of time 1 : ");
    scanf("%d",&t1.mm);
    printf("Enter Minutes of time 2 : ");
    scanf("%d",&t2.mm);
    printf("Enter Hours of time 1 : ");
    scanf("%d",&t1.hh);
    printf("Enter Hours of time 2 : ");
    scanf("%d",&t2.hh);
    t3.ss = t1.ss + t2.ss;
    t3.mm = t1.mm + t2.mm;
    t3.hh = t1.hh + t2.hh;
    h = t3.hh/60;
    m = t3.mm/60;
    s = t3.ss/60;
    if(t3.ss>=60)
    {
        t3.mm+=s;
        t3.ss-=60;
    }
    if(t3.mm>=60)
    {
        t3.hh+=m;
        t3.mm-=60;
    }
    printf("\nSum of Time = %d : %d : %d ",t3.hh,t3.mm,t3.ss);
}

