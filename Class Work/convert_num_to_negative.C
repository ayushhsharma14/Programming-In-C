//Program to convert a postive number into its negative equivalent

#include<stdio.h>

int main ()
{
    float num; 

    printf("Enter a positive number between 0 and 10 : ");
    scanf("%f",&num);

    if(num >= 0 && num <= 10)
    {
        num = -num;

        printf("The negavtive of the entered number is : %.2f",num);
    }

    else
    {
        printf("The entered number is not in the range of 0 to 10");
    }

    return 0;

}