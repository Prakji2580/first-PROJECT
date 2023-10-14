#include<stdio.h>
int main()
{
    char a = 'A';
    for(int i = 1; i<=4; i++)
    {
        for(int j = 1; j<=4; j++)
        {
            printf("%c ",a);
            a++;
        }
        printf("\n");
    }
    return 0;
}