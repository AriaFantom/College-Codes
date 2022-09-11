#include<stdio.h>
int main()
{
    int num, first, second, third, fourth, sum1, sum2;
    printf("Enter a 4 digit number: ");
    scanf("%d", &num);
    first = num / 1000;
    second = (num / 100) % 10;
    third = (num / 10) % 10;
    fourth = num % 10;
    sum1 = first + second;
    sum2 = third + fourth;
    printf("Sum of first two digits is: %d and sum of last two digits is: %d", sum1, sum2);
    return 0;
}