//Program to calculate the final balance after applying a loss to an account balance using unary operator in C

#include<stdio.h>

int main()
{
    int initial_balance, loss, final_balance;

    printf("Enter the initial balance: ");
    scanf("%d", &initial_balance);

    printf("Enter the loss amount: ");
    scanf("%d", &loss);

    final_balance = initial_balance + (-loss);

    printf("The final balance after applying the loss is: %d\n", final_balance);

    return 0;
}