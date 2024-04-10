#include<stdio.h>
int main()
{
    int row,col;
    int n;
    printf("Enter the number of Row : ");
    scanf("%d",&n);
    for(row=0;row<=n;row++)
    {
        for(col=1;col<=n-row;col++)
        {
            printf("*");
        }
        printf("\n");
    }
}
