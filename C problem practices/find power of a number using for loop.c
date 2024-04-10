#include<stdio.h>
int main()
{
    int base,power,res=1,i;

    printf("Enter the base : ");
    scanf("%d",&base);
    printf("Enter power : ");
    scanf("%d",&power);

    for(i=1;i<=power;i++)
    {
        res=res*base;
    }

    printf("%d^%d=%d",base,power,res);

    return 0;
}
