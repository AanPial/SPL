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

            if(row==1 || row==n || col==1 || col==n)
            {
                if(row==1 && (col==1 || col==n) || row==n && (col==1 || col==n))
                {
                    printf("1");
                }
                else
                {
                    printf("0");
                }
            }
            else
            {
                printf("%d",x);
                x++;
                if(x>1)
                {
                    x=0;
                }
            }
        }
        printf("\n");
    }

    return 0;
}
