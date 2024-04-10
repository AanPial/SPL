#include<stdio.h>
int main()
{
    int row,col,n;
    int x,y;

    printf("Enter row : ");
    scanf("%d",&n);

    for(row=1;row<=n;row++)
    {
        for(col=1;col<=row;col++)
        {
            printf(" ");
        }
        x=row;
        for(col=1;col<=n-row+1;col++)
        {
            printf("%d",x);
            x++;

        }
        y=n-1;
        for(col=1;col<=n-row;col++)
        {
            printf("%d",y);
            y--;
        }

        printf("\n");
    }
}
