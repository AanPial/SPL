#include<stdio.h>
void call(int x)
{
    if(x%2==0)
    {
        printf("Even.");
    }
    else
    {
        printf("Odd.");
    }
}
int main()
{
    int x;

    printf("Enter a Number : ");
    scanf("%d",&x);

    call(x);

    return 0;
}