//Ans: to the question no # (2)
//number pattern

#include<stdio.h>
int main()
{
    int row,col,n;

    printf("Enter row : ");
    scanf("%d",&n);

    for(row=1;row<=n;row++)
    {
        for(col=1;col<=n-row;col++)
        {
            printf(" ");
        }
        for(col=1;col<=row;col++)
        {
            printf("%d",row+col-1);
        }
        for(col=row-1;col>=1;col--)
        {
            printf("%d",row+col-1);
        }
        printf("\n");
    }

    return 0;
}
