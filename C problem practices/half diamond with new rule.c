#include<stdio.h>
int main()
{
    int row,col,n;
    int tarc=1;

    printf("Enter row : ");
    scanf("%d",&n);

    for(row=1;row<=2*n;row++)
    {
        for(col=1;col<=tarc;col++)
        {
            printf("*");
        }
        if(row<=n-1)
        {
            tarc++;
        }
        else
        {
            tarc--;
        }
        printf("\n");
    }
}
