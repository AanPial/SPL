#include<stdio.h>
int main()
{
    int i,n,sum=0;

    printf("Input upper limit: ");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        sum+=i;
    }
    printf("Sum of nutral numbers(1-%d): %d",n,sum);

    return 0;
}
