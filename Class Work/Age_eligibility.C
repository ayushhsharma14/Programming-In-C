// Program to check the eligibility of a person based for voter id card

#include <stdio.h>

int main()
{
    int age;

    printf("Enter Your Age : ");
    
    scanf("%d", &age);

    if (age >= 18)
    {
        printf("You are eligible for voter id card ");
    }

    return 0;
}