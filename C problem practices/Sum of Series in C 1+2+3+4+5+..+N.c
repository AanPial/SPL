#include<stdio.h>
int main()
{
    int n,sum=1,i;

    printf("Enter n value : ");
    scanf("%d",&n);

    printf("%d",sum);
    for(i=2;i<=n;i++)
    {
        printf("+%d",i);
        sum=sum+i;
    }
    printf("=%d",sum);

    return 0;
}
