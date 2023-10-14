#include<stdio.h>
void main()
{
    int year,rem1,rem2;
    printf("enter year\n");
    scanf("%d",&year);
    printf((year%4==0 || year%400 == 0) ? "Leap" : "Not leap");


}


