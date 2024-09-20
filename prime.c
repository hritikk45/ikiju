#include<stdio.h>
void main()
{
    int n, i, mohan=0;
    printf("Enter the number ");
    scanf("%d",&n);

    for(i=2; i<n; i++)
    {
        if(n%i==0)
        {
            mohan++;
            break;
        }
    }

    if(mohan==0)
    {
        printf("Given number is a Prime number");
    }
    else
    {
        printf("Given number is not a Prime number");
    }
}