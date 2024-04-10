#include<stdio.h>
int main()
{
    int row,col,n;
    int x;

    printf("Enter n : ");
    scanf("%d",&n);

    for(row=1;row<=n;row++)
    {
        x=row;
        for(col=1;col<=n;col++)
        {
            printf("%d",x);
            x++;
        }
        printf("\n");
    }

    return 0;
}

