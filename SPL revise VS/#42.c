#include<stdio.h>
int main()
{
    int i,n,m,hcf;

    printf("Enter two numbers : ");
    scanf("%d%d",&n,&m);

    for(i=1;i<=m;i++)
    {
        if((n%i==0)&& (m%i==0))
        {
            hcf=i;
        }
    }
    printf("HCF = %d",hcf);

    return 0;
}
