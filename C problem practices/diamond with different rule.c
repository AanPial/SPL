#include<stdio.h>
int main()
{
    int row,col,n;

    printf("Enter row : ");
    scanf("%d",&n);

    int space=n-1,star=1;

    for(row=1;row<=2*n;row++)
    {
        for(col=1;col<=space;col++)
        {
            printf(" ");
        }
        for(col=1;col<=2*star-1;col++)
        {
            printf("*");
        }
        if(row<n)
        {
            space--;
            star++;
        }
        else
        {
            space++;
            star--;
        }
        printf("\n");
    }

}
