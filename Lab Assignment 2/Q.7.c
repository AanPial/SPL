#include<stdio.h>

int checkerFunc1(int n)
{
    int evenSum=0, oddSum=0;

    while (n>0)
    {
        int digit=n%10;
        if (digit%2==0)
        {
            evenSum+=digit;
        }
        else
        {
            oddSum+=digit;
        }
        n/=10;
    }

    return oddSum<evenSum ? 1 : -1;
}

int primeChecker(int n)
{
    int i;
    if(n<=1)
    {
        return -1;
    }

    for(i=2;i*i<=n;i++)
    {
        if(n%i==0)
        {
            return -1;
        }
    }

    return 1;
}

int DemogorgonNumber(int n)
{
    if(checkerFunc1(n) == 1 && primeChecker(n) == 1)
    {
        return 1;
    }
    return -1;
}

int main()
{
    int m,n,i;
    printf("Input : ");
    scanf("%d",&n);
    scanf("%d",&m);

    printf("Output :\n",m,n);
    for (i=n;i<=m;i++)
    {
        if(DemogorgonNumber(i) == 1)
        {
            printf("%d ",i);
        }
    }

    printf("\n");
    return 0;
}

