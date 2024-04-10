#include<stdio.h>

int main()
{
    int n,m,bitsat;
    printf("Enter the Num:");
    scanf("%d",&n);
    printf("Enter the bit position:");
    scanf("%d",&m);

    bitsat=(n>>m)&1;

    printf("%d bit of % is set (%d)",m,n,bitsat);

    return 0;
}

