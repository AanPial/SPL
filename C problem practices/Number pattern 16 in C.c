#include<stdio.h>
int main()
{
    int row,col,n;

    printf("Enter row : ");
    scanf("%d",&n);

    int x=n;

    for(row=1;row<=n;row++)
    {
        for(col=n;col>n-row;col--)
        {
            printf("%d",col);
        }
        for(col=1;col<=n-row;col++)
        {
            printf("%d",n-row+1);
        }
        printf("\n");
    }

    return 0;
}
