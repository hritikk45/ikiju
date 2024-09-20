#include <stdio.h>

void main()
{
    int a[4];
    int i, sum=0;
    a[0]=1;
    a[1]=2;
    a[2]=3;
    a[3]=4;
    for ( i = 0; i < 4; i++)
    {
        sum = sum + a[i];
    }
    
    printf("The sum of array elements are: %d",sum);
}
    

