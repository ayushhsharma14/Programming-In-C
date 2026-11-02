//Program to print first 5 multiple of 7

#include<stdio.h>

int main()
{ 
    int i, num;
    
    i = 1;
    num = 7;

    while(i <= 5)
    {
        num = 7 * i;
        printf("The %d multiple of 7 is : %d\n", i, num);
        i = i + 1;
    }

    return 0;
}
