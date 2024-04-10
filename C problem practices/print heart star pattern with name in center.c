#include<stdio.h>
#include<string.h>
int main()
{
    int row,col,n,len;
    char name[1000];

    printf("Enter name : ");
    gets(name);

    printf("Enter row : ");
    scanf("%d",&n);
    len = strlen(name);

    for(row=n/2;row<=n;row+=2)
    {
        for(col=1;col<=n-row;col+=2)
        {
            printf(" ");
        }
        for(col=1;col<=row;col++)
        {
            printf("*");
        }
        for(col=1;col<=n-row;col++)
        {
            printf(" ");
        }
        for(col=1;col<=row;col++)
        {
            printf("*");
        }
        printf("\n");
    }
    for(row=1;row<=n;row++)
    {
        for(col=1;col<=row;col++)
        {
            printf(" ");
        }
        if(row==1)
        {
            for(col=1; col<=(n * 2-len)/2; col++)
            {
                printf("*");
            }

            printf("%s", name);

            for(col=1; col<(n*2-len)/2; col++)
            {
                printf("*");
            }
        }
        else
        {
            for(col=1;col<=2*(n-row)+1;col++)
            {
                printf("*");
            }
        }
        printf("\n");
    }
}

