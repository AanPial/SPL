#include<stdio.h>
int main()
{
    int n,r;
    printf("Enter n : ");
    scanf("%d",&n);
    printf("Enter r : ");
    scanf("%d",&r);

    if(n>=r)
    {
        int i,prod=1;
        for(i=1; i<=n; i++)
        {
            prod=prod*i;
        }

        int prod2=1;
        for(i=1; i<=r; i++)
        {
            prod2=prod2*i;
        }

        int prod3=1;
        for(i=1; i<=n-r; i++)
        {
            prod3=prod3*i;
        }

        int nCr;
        nCr=prod/(prod2*prod3);
        printf("nCr = %d\n",nCr);
    }
    else
    {
        printf("\n=n should be greater or equal than r\n");
    }

    return 0;

}

