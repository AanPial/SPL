#include<stdio.h>
int main()
{
    int num,count=0;

    printf("Input number:");
    scanf("%d",&num);

    while(!(num&1))
    {
        num=num>>1;
        count++;
    }
    printf("Trailing Zeros: %d",count);

    return 0;
}
