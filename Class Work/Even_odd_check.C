//Program to check whether the number is even or odd

#include<stdio.h>

int main ()
{
    int num_1 ;

    printf("Enter to check if a number is even or odd : \n");
    scanf("%d",&num_1);

    if (num_1%2 == 0)
    {
        printf("The entered number is even ");
    }

    else
    {
        printf("The entered number is odd ");
    }

    return 0;
    
}