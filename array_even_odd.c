#include <stdio.h>

void main()
{
    int arr[6];
    int i;
    printf("Enter the no:");
    for (i = 0; i < 6; i++)
    {
        scanf("%d", &arr[i]);
        //printf("your array value is:\t");
    }
    for (i = 0; i < 6; i++)
    {
        if (arr[i] % 2 == 0)
        {
            printf("Element is even %d\n",arr[i]);
        }
    }
    for (i = 0; i < 6; i++)
    {
        if (arr[i] % 2 != 0)
        {
            printf("Element is Odd %d\n",arr[i]);
        }
    }
}