// Area of square

#include<stdio.h>

#include<math.h>

int main()
{
    int area, side;

    printf("Enter the side of square : ");

    scanf("%d", &side);

    area = side*side;

    //

    printf("The area of square with side %d is %d ", area, side);

    return 0;

}