#include<stdio.h>
void main()
{
    int n,t,sum,rem;
    printf("enter  a number ");
    scanf("%d",&n);
    t=n;
    
    while (t!=0)
    {
        rem=t%10;
        sum=sum+rem;
        t=t/10;

    }
    printf("sumof digit=%d\n",sum);




}

