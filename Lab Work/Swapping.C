// Program to swap two numbers using a 3 variable and without using a 3rd variable

#include <stdio.h>


int main()
{
    int num_1, num_2, temp;
    printf("Enter the first number: ");
    scanf("%d", &num_1);

    printf("Enter the second number: ");
    scanf("%d", &num_2);

    temp = num_1;
    num_1 = num_2;
    num_2 = temp;

    printf("After swapping, the first number is: %d\n", num_1);
    printf("After swapping, the second number is: %d\n", num_2);

    return 0;
}

// Program to swap two numbers without using a 3rd variable

// int main_2()
// {
//     int num_1, num_2;
    
//     printf("Enter The first number: ");

//     scanf("%d", &num_1);

//     printf("Enter the second number: ");

//     scanf("%d", &num_2);

//     num_1 = num_1 + num_2;

//     num_2 = num_1 - num_2;

//     num_1 = num_1 - num_2;

//     printf("After swapping, the first number is: %d\n", num_1);
//     printf("After swapping, the second number is what: %d\n", num_2);

//     return 0;
// }