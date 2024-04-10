#include<stdio.h>

int main()
{
    int n1,n2,hcf=1,i;
    int min;

    printf("Enter two number : \n");
    scanf("%d%d",&n1,&n2);

    min=(n1<n2)?n1:n2;

    for(i=1;i<=min;i++)
    {
        if(n1%i==0 && n2%i==0)
        {
            hcf=i;
        }
    }
    printf("HCF of %d and %d = %d",n1,n2,hcf);

    return 0;
}
