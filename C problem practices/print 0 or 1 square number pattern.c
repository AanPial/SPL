#include<stdio.h>
int main()
{
    int row,col,n,x;

    printf("Enter row : ");
    scanf("%d",&n);
    printf("Enter number : ");
    scanf("%d",&x);

    for(row=1;row<=n;row++)
    {
        for(col=1;col<=n;col++)
        {
            printf("%d",x);
        }
        printf("\n");
    }
    return 0;
}
