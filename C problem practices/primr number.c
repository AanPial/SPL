#include<stdio.h>
int main()
{
    int n,i;
    int prime=1;

    printf("Enter number : ");
    scanf("%d",&n);

    for(i=2;i<n;i++)
    {
        if(n%i==0)
        {
            prime=0;
            break;
        }
    }
    if(prime==1)
    {
        printf("Prime number\n");
    }
    else
    {
        printf("Not prime number\n");
    }

    return 0;
}
