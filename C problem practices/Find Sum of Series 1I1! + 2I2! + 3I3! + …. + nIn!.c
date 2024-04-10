#include<stdio.h>
int main()
{
    int n,i,j;
    float sum=0.0,fact;

    printf("Enter the number of terms : ");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        fact=1;
        for(j=1;j<=i;j++)
        {
            fact=fact*j;
        }
        sum=sum+(i/fact);
        if(i<2)
        {
            printf("%d/%d!",i,i);
        }
        else
        {
            printf("+%d/%d!",i,i);
        }
    }
    printf("=%f",sum);
}
