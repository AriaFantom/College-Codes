#include <stdio.h>
int main()
{
    float far, cel;
    printf("Enter temperature in farhenheit: ");
    scanf("%f", &far);
    cel = (far - 32) * 5 / 9;
    printf("Temperature in celsius is: %f", cel);
    return 0;
}