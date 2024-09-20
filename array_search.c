#include <stdio.h>

void main()
{
    int arr[6];
    int i, n, flag=0;
    printf("Enter the array element:");
    for (i = 0; i < 6; i++)
    {
        scanf("%d", &arr[i]);
        //printf("your array value is:\t");
    }

    printf("Enter the element you want to search ");
    scanf("%d",&n);
    for (i = 0; i < 6; i++)
    {
        if (arr[i] == n)
        {
            flag++;
            //printf("Element is found  %d\n",arr[i]);
            //break;
        }
    }

    if(flag != 1)
    {
        printf("Element is found  %d\n",n);
        printf("Element is exists in array %d times\n",flag);
    }
    else{
        printf("Element is not found  %d\n",n);
    }
    
}