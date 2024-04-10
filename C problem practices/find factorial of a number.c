#include<stdio.h>
int main()
{
    int n,i,fact=1;

    printf("Enter number : ");
    scanf("%d",&n);

    printf("%d!=",n);
    for(i=1;i<=n;i++)
    {
        fact=fact*i;
        if(i<2)
        {
            printf("%d",i);
        }
        else
        {
            printf("X%d",i);
        }
    }
    printf("=%d",fact);

    return 0;
}
