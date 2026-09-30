//Program to check whether the student has passed with distinction or not

#include <stdio.h>

int main()
{
    int marks;

    printf("Enter student's marks : ");
    scanf("%d",&marks);

    if (marks >= 40)
    {
        if (marks >= 75)
        {
            printf("The student has passed with distinction ");
        }
        else
        {
            printf("The student has passed! ");
        }
    }

    else 
    {
        printf("The student has failed! ");
    }

    return 0;
}