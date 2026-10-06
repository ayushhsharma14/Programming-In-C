//Program to see if a number lies between 1 and 100

#include <stdio.h>

int main ()
{
    int num; 

    printf("Enter a number : ");
    scanf("%d",&num);

    if(num >= 1)
    {
        if (num <= 100)
        {
            printf("%d lies between 1 and 100",num);
        }
    }
    else
    {
        printf("%d does not lie between 1 and 100",num);
    }


}