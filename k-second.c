#include<stdio.h>
int main()
{
    float basic, rent, gross;
    printf("Enter basic salary: ");
    scanf("%f", &basic);
    printf("Enter rent allowance: ");
    scanf("%f", &rent);
    gross = basic + rent;
    printf("Gross salary is: %f", gross);
    return 0;
}