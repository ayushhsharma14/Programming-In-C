//A program to calculate the distance between two points in 2D space
#include <stdio.h>
#include <math.h>

int main() {
    int x1, y1, x2, y2, distance;

    printf("Enter the coordinates of the first point (x1 y1): ");

    scanf("%d %d", &x1, &y1);

    printf("Enter the coordinates of the second point (x2 y2): ");

    scanf("%d %d", &x2, &y2);

    distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    printf("The distance between the two points is: %d\n ", distance);

    return 0;
}