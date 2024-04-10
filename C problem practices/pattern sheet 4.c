#include<stdio.h>
int main()
{
    int row,col,n;

    printf("Enter n : ");
    scanf("%d",&n);

    for(row=0;row<=n;row++)
    {
        for(col=1;col<=row;col++)
        {
            printf(" ");
        }
        for(col=0;col<=n-row;col++)
        {
            printf("*");
        }
        printf("\n");
    }
}
