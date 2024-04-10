#include<stdio.h>
eveodd(n)
{
    if(n%2==0)
    {
        printf("Even");
    }
    else
    {
        printf("Odd");
    }
}
int main()
{
    int x;

    printf("Enter value : ");
    scanf("%d",&x);

    eveodd(x);

    return 0;
}
