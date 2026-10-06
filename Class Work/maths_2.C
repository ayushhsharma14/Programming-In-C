// Program to calulate addition, subtraction, multiplication and division of two numbers

#include <stdio.h>

int main()
{
    float num1, num2, sum, difference, product, modulus, division;

    printf("Enter two numbers : ");
    scanf("%f %f",&num1,&num2);

    sum = num1 + num2;
    difference = num1 - num2;
    product = num1 * num2;
    //modulus = num1 % num2;
    division = num1 / num2;

    printf("Sum of %f and %f is : %.2f \n",num1,num2,sum);
    printf("Difference of %f and %f is : %.2f \n",num1,num2,difference);
    printf("Product of %f and %f is : %.2f \n",num1,num2,product);
    //printf("Modulus of %d and %d is : %d \n",num1,num2,modulus);
    printf("Division of %f and %f is : %.2f \n",num1,num2,division);
}

