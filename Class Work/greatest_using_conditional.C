//Program to find the greatest of three numbers using conditional operator

#include <stdio.h>

int main()
{
    int a,b,c,greatest;

    printf("Enter three numbers: ");
    scanf("%d %d %d",&a,&b,&c);

    greatest = (a>b)?((b<c)?a:c):((b>c)?b:c);

    printf("The greatest number is: %d\n",greatest);

    return 0;
}