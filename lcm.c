#include<stdio.h>
void main()
{
    int a,b,i,lcm=0;
    printf("enter 2 numbers");
    scanf("%d %d",&a,&b);
    for(i=(a>b?a:b);i<=a*b;i++)
    {
        if(i%a==0 && i%b==0)
        {
        lcm=i;
        break;
        }
    }
    printf("lcm is %d",lcm);
    

}


