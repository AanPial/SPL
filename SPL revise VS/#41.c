#include<stdio.h>
int main()
{
    int i,n;
    int fact=1;
    printf("Enter number : ");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        fact=fact*i;
    }

    printf("Factorial = %d",fact);

    return 0;
}
