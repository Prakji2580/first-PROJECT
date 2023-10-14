#include<stdio.h>
void main()
{
    int a;
    printf("enter age of person\n");
    scanf("%d",&a);
    if(a>=0&&a<=25)
    printf("\nBrahamachra");
    if(a>=26&&a<=50)
    printf("\ngrhastha");
    if(a>=51&&a<=75)
    printf("\nvanaprastha");
    if(a>=76&&a<=100)
    printf("\nsanyasa");


}

