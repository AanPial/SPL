#include<stdio.h>
int main()
{
    int row,col,n;

    printf("Enter the number : ");
    scanf("%d",&n);

    for(row=0;row<=n;row++)
    {
        for(col=0;col<=row;col++)
        {
            printf("*");
        }
        printf("\n");
    }
}
