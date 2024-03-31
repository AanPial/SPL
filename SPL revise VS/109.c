#include<stdio.h>

int call(int n)
{
    if(n==0)
    {
        return 1;
    }
    else
    {
        return n=n*call(n-1);
    }
}
int main()
{
    int x;
    printf("Enter number : ");
    scanf("%d",&x);

    int fact = call(x);

    printf("\nFactorial = %d\n\n",fact);

    return 0;
}