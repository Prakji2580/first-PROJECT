#include<stdio.h>
void main()
{
int n ,i,c=0;
printf("enter number");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
    if(n%i==0)
    c++;

}
if(c==2)
printf("it is prime number=%d",n);
else 
printf("not a prime number ");

}



