#include<stdio.h>
#define MAX 100
int main()
{
    int arr[MAX][MAX],mrr[MAX][MAX];
    int i,j,row,col;

    printf("Enter row and column : ");
    scanf("%d",&row);
    col=row;

    printf("Enter elements to array 1 :\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    printf("\n");

    printf("Enter elements to array 2 :\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            scanf("%d",&mrr[i][j]);
        }
    }
    printf("\n");
    int eq=1;

    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            if(arr[i][j]!=mrr[i][j])
            {
                eq=0;
                break;
            }
        }
    }

    if(eq==1)
    {
        printf("Matrices are equal.");
    }
    else
    {
        printf("Both matrices are not equal.");
    }

    return 0;
}
