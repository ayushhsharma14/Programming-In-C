//Program to print even numbers from 1 to 10 using do while loop

#include<stdio.h>

int main()
{
    int i, num;

    i = 2;

    do
    {
        printf("%d\n",i);
        i = i+2;
    }
    while(i <= 10);
    return 0;
}