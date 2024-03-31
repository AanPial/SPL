#include<stdio.h>
int call(int x)
{
    int i;
    for(i=2;i<x;i++)
    {
        if(x%i==0)
        {
            return 0;
        }
        else
        {
            return 1;
        }
    }
}
int main()
{
    int x;

    printf("Enter a Number : ");
    scanf("%d",&x);

    int prime=call(x);

    if(prime==1)
    {
        printf("Peime Number.");
    }
    else
    {
        printf("Not Prime.");
    }

    return 0;
}