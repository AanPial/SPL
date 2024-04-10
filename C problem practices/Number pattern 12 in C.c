#include<stdio.h>
int main()
{
    int row,col,n;
    int x=1;

    printf("Enter row : ");
    scanf("%d",&n);

    for(row=1;row<=n;row++)
    {
        for(col=1;col<=n;col++)
        {
            printf("%d",x);
            x++;
        }
        printf("\n");
    }
}
