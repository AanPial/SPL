#include<stdio.h>
int main()
{
    int row,col,n;
    int x=1;
    int state=1;

    printf("Enter row : ");
    scanf("%d",&n);

    for(row=1; row<=n; row++)
    {
        for(col=1; col<=n-row; col++)
        {
            printf(" ");
        }
        for(col=1; col<=row; col++)
        {
            if(state==1)
            {
                printf("%d",x);
                x++;
                if(x>n)
                {
                    state=0;
                    x=x-2;
                }
            }
            else if(state==0)
            {
                printf("%d",x);
                x--;
                if(x<1)
                {
                    state=1;
                    x=x+2;
                }
            }
        }
        printf("\n");
    }
}
