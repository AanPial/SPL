#include<stdio.h>
int main()
{
    int i,n,sum=1,sqr;

    printf("Enter n value : ");
    scanf("%d",&n);

    printf("%d^2",sum);
    for(i=2;i<=n;i++)
    {
        printf("+%d^2",i);
        sqr=pow(i,2);
        sum=sum+sqr;
    }
    printf("=%d",sum);

    return 0;
}
