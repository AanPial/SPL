#include<stdio.h>
int main()
{
    int n,i,t=9,sum=0;

    printf("Enter num : ");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        sum=sum+t;
        if(i>1)
        {
            printf("+%d",t);
        }
        else
        {
            printf("9");
        }
        t=t*10+9;
    }
    printf("=%d",sum);

    return 0;
}
