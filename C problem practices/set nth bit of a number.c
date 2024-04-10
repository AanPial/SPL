#include<stdio.h>

int main()
{
    int num,n,newnum;

    printf("Enter your num:");
    scanf("%d",&num);

    printf("Enter your position:");
    scanf("%d",&n);

    newnum=(1<<n)| num;

    printf("%d",newnum);

    return 0;
}

