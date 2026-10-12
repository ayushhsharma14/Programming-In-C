//Program to implement a bitwise AND & bitwise OR operation on two numbers

#include<stdio.h>

int main()
{
    int a, b, and_result, or_result;

    printf("Enter two numbers ");
    scanf("%d %d", &a, &b);

    and_result = a & b;
    or_result = a | b;

    printf("Results of bitwise AND is : %d\n", and_result);
    printf("Result of bitwise OR is : %d\n", or_result);

    return 0;
}