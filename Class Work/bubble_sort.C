//Program to implement bubble sort algorithm

#include<stdio.h>

int main()
{
    int n;
    
    printf("Enter the number of elements you want to store in the array: ");
    scanf("%d",&n);

    int arr[n];

    for(int i=0;i<n;i++)
    {
        printf("Enter element : ");
        scanf("%d",&arr[i]);
    }

    printf("\nElements before bubble sort: ");

    for(int f=0;f<n;f++)
    {
        printf("%d ",arr[f]);
    }

    for(int j=0;j<n-1;j++)
    {
        for(int k=0;k<n-j-1;k++)
        {
            if(arr[k]>arr[k+1])
            {
                int temp = arr[k];
                arr[k]=arr[k+1];
                arr[k+1]=temp;
            }

        }
    }

    printf("\n\nElements after bubble sort: ");
    for(int t=0;t<n;t++)
    {
        printf("%d ",arr[t]);
    }
}