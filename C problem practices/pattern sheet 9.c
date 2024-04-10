#include<stdio.h>
int main()
{
    int row,col,n;
    int x=1;

    printf("Enter n : ");
    scanf("%d",&n);

    for(row=1;row<=n;row++)
    {
        for(col=0;col<n-row;col++)
        {
            printf(" ");
        }
        for(col=0;col<row;col++)
        {
            printf("%d",x);
            x++;
            if(x>n)
            {
                x=1;
            }
        }
        printf("\n");
    }

    return 0;
}
