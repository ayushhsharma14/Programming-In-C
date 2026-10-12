//Program to find the greatest of three numbers using conditional operator

#include <stdio.h>

int main()
{
    int a,b,c,greatest,temp;

    printf("Enter three numbers: ");
    scanf("%d %d %d",&a,&b,&c);

    temp = (a > b)? (temp = a) : (temp = b);;
    greatest = (temp > c)? (temp) : (c);

    printf("The greatest number is: %d\n",greatest);

    return 0;
}