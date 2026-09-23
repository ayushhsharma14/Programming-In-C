// Program to calculate cube / any power

#include<stdio.h>

#include<math.h>

int main()
{
    int num_1, pow_of_num;

    printf("Enter the number for cube root : ");

    scanf("%d", &num_1);

    pow_of_num = pow(num_1, 3);

    printf("The cube root of %d, is %d ", num_1, pow_of_num);

    return 0;


}