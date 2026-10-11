//Program to check whether the number is even or odd

#include<stdio.h>

int main ()
{
    int num_1 ;

    printf("Enter to check if a number is even or odd : ");
    scanf("%d",&num_1);

    if (num_1%2 != 0)
    {
        printf("The entered number is odd ");
    }

    else
    {
        printf("The entered number is even ");
    }

    return 0;
    
}