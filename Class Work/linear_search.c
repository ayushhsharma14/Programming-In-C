//Program to implement linear search

#include<stdio.h>

int main()
{
    int n,i,key,count=0;

    printf("Enter the number of element you want in array : ");
    scanf("%d", &n);

    int arr[n],pos;

    for(i=0;i<n;i++)
    {
        printf("Enter the element : ");
        scanf("%d", &arr[i]);
    }

    for(int k = 0; k<n; k++)
    {
        printf("%d",arr[k]);
    }

    printf("\nEnter the element you want to search : ");
    scanf("%d", &key);

    for(int j = 0; j < n; j++)
    {
        if(key==arr[j])
        {
            count = 1;
            pos = j+1;
            break;
        }
    }

    if(count==1)
    {
        printf("Element is found at position : %d",pos);
    }
    else
    {
        printf("Element not found");
    }


}