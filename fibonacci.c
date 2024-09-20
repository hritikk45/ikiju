#include<stdio.h>
void main()
{
    int a=0, b=1, c, n, i;
    printf("Enter the range ");
    scanf("%d",&n);
    printf("%d\t%d\t",a,b);

    for(i=2; i<=n; i++)
    {
        c = a+b;
        printf("%d\t",c);
        a = b;
        b = c;
    }
    
}