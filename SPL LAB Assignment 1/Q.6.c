//Ans: to the question no # (6)
//find factorial

#include<stdio.h>
int main()
{
    int n,fact=1,i,j;

    printf("Enter the number : ");
    scanf("%d",&n);

    printf("\n%d!=",n);

    for(j=n;j>=1;j--)
    {
        if(j<2)
        {
            break;
        }
        printf("%dX",j);
    }
    printf("1");

    for(i=1;i<=n;i++)
    {
        fact=fact*i;
    }
    printf("=%d\n",fact);

    return 0;
}
