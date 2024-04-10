#include<stdio.h>
int main()
{
    int row,col,n;

    printf("Enter number of row : ");
    scanf("%d",&n);

    for(row=1;row<=n;row++)
    {
        for(col=0;col<n-row;col++)
        {
            printf(" ");
        }
        for(col=row;col>0;col--)
        {
            printf("%d",col);
        }
        printf("\n");
    }
}
