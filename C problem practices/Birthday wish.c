#include<stdio.h>
int main()
{
    int n,row,col;

    printf("Enter the size : ");
    scanf("%d",&n);

    //HAPPY
    for(row=1; row<=n; row++)
    {
        for(col=1; col<=n; col++)
        {
            if(col==1 || col==n || row==n/2+1 )
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        for(col=1; col<=n-row; col++)
        {
            printf(" ");
        }
        for(col=1; col<=2*row-1; col++)
        {
            if(col==1 || col==2*row-1 || row==n/2+1)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        for(col=1; col<=n-row; col++)
        {
            printf(" ");
        }
        for(col=1; col<=n; col++)
        {
            if(col==1 || row==1 || row==n/2+1)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        if(row<=n-row+1)
        {
            printf("*");
        }
        else
        {
            printf(" ");
        }

        printf(" ");

        for(col=1; col<=n; col++)
        {
            if(col==1 || row==1 || row==n/2+1)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        if(row<=n-row+1)
        {
            printf("*");
        }
        else
        {
            printf(" ");
        }

        printf(" ");

        if(row<=n-row+1)
        {
            printf("*");
        }
        else
        {
            printf(" ");
        }
        for(col=1; col<=n; col++)
        {
            if(row==n/2+1 || col==n || row==n)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    printf("\n");
    printf("\n");

    //B
    for(row=1; row<=n; row++)
    {
        for(col=1; col<=n; col++)
        {
            if(row==1 || row==n || col==1 || row==n/2+1 || col==n)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    //I
    for(row=1; row<=n; row++)
    {
        for(col=1; col<=n; col++)
        {
            if(row==1 || row==n || col==n/2+1)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    //R
    for(row=1; row<=n/2; row++)
    {
        for(col=1; col<=n; col++)
        {
            if(row==1 || row==n/2 || col==1 || col==n)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }

        printf("\n");
    }
    //T
    for(row=1; row<=n/2+2; row++)
    {
        for(col=1; col<=row; col++)
        {
            if(col==1 || col==row)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    //H
    for(row=1; row<=n; row++)
    {
        for(col=1; col<=n; col++)
        {
            if(row==1 || col==n/2+1)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    for(row=1; row<=n; row++)
    {
        for(col=1; col<=n; col++)
        {
            if(col==1 || col==n || row==n/2+1 )
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }

    printf("\n");
    for(row=1; row<=n; row++)
    {
        for(col=1; col<=n; col++)
        {
            if(col==1 || col==n || row==1 || row==n )
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        for(col=1; col<=n-row; col++)
        {
            printf(" ");
        }
        for(col=1; col<=2*row-1; col++)
        {
            if(col==1 || col==2*row-1 || row==n/2+1)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        for(col=1; col<=n-row; col++)
        {
            printf(" ");
        }
        if(row<=n-row+1)
        {
            printf("*");
        }
        else
        {
            printf(" ");
        }
        for(col=1; col<=n; col++)
        {
            if(row==n/2+1 || col==n || row==n)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    printf("\n");
}
