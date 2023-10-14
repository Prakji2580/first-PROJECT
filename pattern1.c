#include<stdio.h>
int main()
{
    /*
    *****
     ****
      ***
       **
        *
    */
    for(int i = 5; i<=1; i--)
    {
        for(int x = 1; x<=i-5; i++)
        {
            printf(" ");
        }
        for(int j = 1; j<=i; j++)
        {
            
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}