#include<stdio.h>
int main()
{
    int n,i,sum=0;

    printf("Enter n : ");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        sum=sum+(i*i)*(i+1);
    }
    printf("\nSum : %d\n",sum);

    return 0;
}

