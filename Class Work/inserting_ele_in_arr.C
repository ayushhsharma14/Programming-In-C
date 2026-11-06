//Program to insert an element in an array at a given position

#include<stdio.h>

int main()
{
    int n, pos, ele;

    printf("Enter the number of elements you want to store in the array: ");
    scanf("%d",&n);

    int arr[n];

    for(int i=0; i<n; i++)
    {
        printf("Enter element : ");
        scanf("%d",&arr[i]);
    }

    for(int j=0; j<n;j++)
    {
        printf("%d ",arr[j]);
    }

    printf("\nEnter the position where you want to enter the new element : ");
    scanf("%d",&pos);

    printf("Enter the element you want to insert : ");
    scanf("%d",&ele);

    n++;

    for(int q = n; q>pos; q--)
    {
        arr[q-1] = arr[q-2];
    }
    arr[pos-1] = ele;

    for(int t=0; t<n;t++)
    {
        printf("%d ",arr[t]);
    }

}