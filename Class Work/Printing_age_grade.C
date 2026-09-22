// Program to print the name, age, grade of student is

#include<stdio.h>

int main()
{
    char grade;
    int age;

    printf("Enter the grade of the student : ");

    scanf("%c", &grade);

    printf("Enter the age of student : ");

    scanf("%d", &age);

    printf("The grade of student is %c and the age of student is %d ", grade, age);

    return 0;

}