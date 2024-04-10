#include<stdio.h>
int main(void)
{
    int a=1,b=3,n,count=0,sum=0;
    scanf("%d",&n);
    int temp=n;
    while(n--)
    {
        sum+=a*b;
        printf("%d*%d",a,b);
        count++;
        if(count%2!=0)
        {
            a++;
            b++;
        }
        else
        {
            a+=3;
            b+=3;
        }
        if(count!=temp)
        {
            printf("+");
        }
    }
    return 0;
}
