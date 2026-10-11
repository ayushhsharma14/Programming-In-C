// Program to demonstrate the increment operator in C

#include <stdio.h>

int main()
{
    int a,b,c;

    printf("Enter a number: ");
    scanf("%d",&a);

    b = ++a;
    
    printf("Value of a after pre-increment: %d\n", a);
    printf("Value of b after pre-increment: %d\n", b);
    
    c = a++;
    
    printf("Value of a after post-increment: %d\n", a);
    printf("Value of c after post-increment: %d\n", c);

    return 0;
}