// Program to check whether the person is a senior citizen or not and is eligible to vote or not

#include<stdio.h>

int main ()

{
    int age ;

    printf("Enter your age : ");
    scanf("%d",&age);

    if (age >= 60)
    {
        printf("You are a senior citizen \nYou are eligible to vote ");
    }

    else if (age >= 18)
    {
        printf("You are not a senior citizen \nYou are eligible to vote ");
    }

    else
    {
        printf("You are not a senior citizen \nYou are not eligible to vote ");
    }

    return 0;
}