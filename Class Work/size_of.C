//Program to find the size of data types in C

#include<stdio.h>

int main()
{
    int a;
    unsigned int result_a, result_b, result_c;
    char b; 
    float c;

    result_a = sizeof(a);
    result_b = sizeof(b);
    result_c = sizeof(c);

    printf("The size of int data type is : %zu bytes\n", result_a);
    printf("The size of char data type is : %zu bytes\n", result_b);
    printf("The size of float data type is : %zu bytes\n", result_c);

    return 0;


}