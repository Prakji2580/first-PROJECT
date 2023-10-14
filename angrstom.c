#include<stdio.h>
void main()
{
int n,t,rem,sum=0;
printf("enter a number");
scanf("%d",&n);
t=n;
while(t!=0)
{
rem=t%10;
sum=sum+rem*rem*rem;
t=t/10;
}

if(n==sum)
printf("number is armstrong ");
else
printf("number is not armstrong");


}







