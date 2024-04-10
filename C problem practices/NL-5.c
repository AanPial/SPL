#include<stdio.h>
int main()
{
    int row,col,n;
    int x;

    printf("Enter n : ");
    scanf("%d",&n);

    for(row=1;row<=n;row++)
    {
        x=n;
        for(col=1;col<=row;col++)
        {
            printf("%d",x);
            x--;
        }
        x=n;
        printf("\n");
    }

    return 0;
}
