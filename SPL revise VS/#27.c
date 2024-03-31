#include<stdio.h>
int main()
{
    int i,sum=0,n;

    printf("Enter n : ");
    scanf("%d",&n);

    for(i=0;i<=n;i=i+2)
    {
        sum=sum+i;
    }
    printf("\n%d\n",sum);

    return 0;

}


