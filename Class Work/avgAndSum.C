// Program to calculate sum and avg of 3 numbers

#include<stdio.h>

int main()

{
    int num_1, num_2, num_3, avg, sum;

    printf("Enter The first num : ");

    scanf("%d",&num_1);

    printf("Enter The second num : ");
    
    scanf("%d",&num_2);

    printf("Enter The third num : ");
    
    scanf("%d",&num_3);

    sum = num_1 + num_2 + num_3;

    avg = sum/3;

    printf("The sum of three numbers is %d and avegrage is %d ",sum, avg);

    return 0;

}