#include <stdio.h>

void main()
{
    int a, b, c;
    printf("Enter 1st number: ");
    scanf("%d", &a);
    printf("Enter 2nd number: ");
    scanf("%d", &b);
    c = a + b;
    printf("Sum = %d ", c);
    c = a - b;
    printf(" Difference = %d ", c);
    c = a * b;
    printf(" Product = %d ", c);
    c = a / b;
    printf(" Division = %d ", c);
}