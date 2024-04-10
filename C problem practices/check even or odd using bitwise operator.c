#include<stdio.h>
int main()
{
    int num;

    printf("Enter Number:");
    scanf("%d",&num);

    if(num&1)
    {
        printf("%d is an odd Number",num);
    }
    else
    {
        printf("%d is an even Number",num);
    }

    return 0;
}
