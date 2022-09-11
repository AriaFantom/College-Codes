#include<stdio.h>
int main()
{
    int num, first, second, third, fourth, fifth, newnum;
    printf("Enter a 5 digit number: ");
    scanf("%d", &num);
    first = num / 10000;
    second = (num / 1000) % 10;
    third = (num / 100) % 10;
    fourth = (num / 10) % 10;
    fifth = num % 10;
    first = first + 1;
    second = second + 1;
    third = third + 1;
    fourth = fourth + 1;
    fifth = fifth + 1;
    newnum = first * 10000 + second * 1000 + third * 100 + fourth * 10 + fifth;
    printf("New number is: %d", newnum);
    return 0;
}