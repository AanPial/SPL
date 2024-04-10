#include<stdio.h>
int main()
{
    int  n;

    printf("Enter n : ");
    scanf("%d",&n);

    int i,j,sum=0,x=0,sum1=0;
    for(i=1;i<=n;i++)
    {
        x=0;
        for(j=i;j>=1;j--)
        {
            sum=sum+j*pow(10,x);
            x++;
        }
        sum1=sum1+sum;
        sum=0;
    }
    printf("Sum = %d\n",sum1);

    return 0;
}

