#include<stdio.h>

void main()
{
    int i,j;
    for(i = 0; i<=5; i++)
    {
        for(j=0; j<i; j++)
        {
            printf("%c ",(j+96));
        }
        printf("\n");
    }
}

