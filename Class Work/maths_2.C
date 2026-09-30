// Program to calulate addition, subtraction, multiplication and division of two numbers

#include <stdio.h>

int main()
{
    int num1, num2, sum, difference, product, modulus, division;

    printf("Enter two numbers : ");
    scanf("%d %d",&num1,&num2);

    sum = num1 + num2;
    difference = num1 - num2;
    product = num1 * num2;
    modulus = num1 % num2;
    division = num1 / num2;

    printf("Sum of %d and %d is : %d \n",num1,num2,sum);
    printf("Difference of %d and %d is : %d \n",num1,num2,difference);
    printf("Product of %d and %d is : %d \n",num1,num2,product);
    printf("Modulus of %d and %d is : %d \n",num1,num2,modulus);
    printf("Division of %d and %d is : %d \n",num1,num2,division);
}

