#include<stdio.h>
void main()
{
    int a;
    float b;
    void *ptr = &a;
    printf("Enter value of A: ");
    scanf("%d",ptr); // ptr = &a
    printf("Value of A: %d",*(int*)ptr);
    b = 3.14;
    ptr = &b;
    printf("\nValue of B: %f",*(float*)ptr);
}
