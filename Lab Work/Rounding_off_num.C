// Program to round a floating-point number to the 2 decimal plavce

#include <stdio.h>

int main()
{
    float number;
    printf("Enter a floating-point number: ");
    scanf("%f", &number);
    printf("Rounded number: %.2f", number);

    return 0;
}