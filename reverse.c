#include<stdio.h>
int main()
{    
    int n,i,rev=0, rem, temp;
    printf("enter the number ");
    scanf("%d",&n);
    temp = n;
    while (n>0)
    {
        rem = n % 10;
        rev = rev * 10 + rem;
        n = n/10;
    }
    
    printf("Reverse of %d is %d",n,rev);
}