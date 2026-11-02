//Program to print the corresponding day of the week based on the number entered by the user

#include<stdio.h>

int main()
{
    int day;

    printf("Enter a number (1-7) to get the corresponding day of the week : ");
    scanf("%d", &day);

    switch(day)
    {
        case 1:
            printf("The corresponding day is : Sunday\n");
            break;
        case 2:
            printf("The corresponding day is : Monday\n");
            break;
        case 3:
            printf("The corresponding day is : Tuesday\n");
            break;
        case 4:
            printf("The corresponding day is : Wednesday\n");
            break;
        case 5:
            printf("The corresponding day is : Thursday\n");
            break;
        case 6:
            printf("The corresponding day is : Friday\n");
            break;
        case 7:
            printf("The corresponding day is : Saturday\n");
            break;
        default:
            printf("Invalid input! Please enter a number between 1 and 7.\n");
    }

    return 0;
}