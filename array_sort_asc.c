#include <stdio.h>

void main()
{
    int a[5] = {10, 2, 12, 5, 3};
    int i, j, temp;

    printf("Unsorted number \n");
    for (i = 0; i < 5; i++)
    {
        printf("%d\t", a[i]);
    }

    for (i = 0; i < 5; i++)
    {
        for (j = i + 1; j < 5; j++)
        {
            if (a[j] > a[i])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }

    printf("\nSorted number \n");
    for (i = 0; i < 5; i++)
    {
        printf("%d\t", a[i]);
    }
}