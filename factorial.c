#include<stdio.h>
void main()
{
    int n,c,i,j;
    printf("enter a number ");
    scanf("%d",&n);
    c=n;
    for(i=n;i>=1;i--)
    {
    c=c*i;
    }
    j=c/n;
    printf("j factorial=%d",j);



}


