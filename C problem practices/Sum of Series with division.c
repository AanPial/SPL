#include<stdio.h>
int main()
{
    int n,i;
    float sum=1.0,dib;

    printf("Enter n value : ");
    scanf("%d",&n);

    printf("1");
    for(i=2;i<=n;i++)
    {
        printf("+1/%d",i);
        dib=(1.0/i);
        sum=sum+dib;
    }
    printf("=%f",sum);
}
