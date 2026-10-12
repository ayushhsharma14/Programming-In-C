//Program to implement bitwise NOT operator

#include<stdio.h>

int main()
{
    int num_1, NOT_result;

    printf("Enter a number : ");
    scanf("%d", &num_1);

    NOT_result = ~num_1;
    printf("The result of bitwise NOT operation on %d is : %d\n", num_1, NOT_result);

    return 0;
}