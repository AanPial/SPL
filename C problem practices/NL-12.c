#include<stdio.h>
int main()
{
    int  row,col,n;
    int x,y,z,m=1;

    printf("Enter n : ");
    scanf("%d",&n);

    for(row=1; row<=n; row++)
    {
        x=1;
        for(col=1; col<=row; col++)
        {
            printf("%d",x);
            x++;
        }
        for(col=1; col<=2*(n-row)-1; col++)
        {
            printf(" ");
        }
        y=row;
        if(row==n)
        {
            z=n-1;
            for(col=2; col<=n; col++)
            {
                printf("%d",z);
                z--;
            }
        }
        else
        {
            for(col=1; col<=row; col++)
            {
                printf("%d",y);
                y--;
            }
        }
        printf("\n");
    }

    return 0;
}
