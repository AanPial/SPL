#include<stdio.h>
int main()
{
    int n,exp,power=1;

    printf("Enter base : ");
    scanf("%d",&n);
    printf("Enter exponent : ");
    scanf("%d",&exp);
    for(int i=1;i<=exp;i++)
    {
        power=power*n;
    }
    printf("%d^%d=%d",n,exp,power);

    return 0;
}
