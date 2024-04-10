#include<stdio.h>
int main()
{
    int row,col,n;

    printf("Enter row : ");
    scanf("%d",&n);

    for(row=1;row<=n-1;row++)
    {
        for(col=1;col<=row-1;col++)
        {
            printf("  ");
        }
        for(col=1;col<=n-row+1;col++)
        {
            printf("*");
        }
        printf("\n");
    }
    for(row=1;row<=n;row++)
    {
        for(col=1;col<=n-row;col++)
        {
            printf("  ");
        }
        for(col=1;col<=row;col++)
        {
            printf("*");
        }
        printf("\n");
    }
}
