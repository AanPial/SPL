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
    printf("\n");
    int low=1;
    
    printf("\nOriginal matrix : \n");

    for(i=0;i<row;i++)
    {
        for(j=0;j<row;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<row;i++)
    {
        for(j=0;j<row;j++)
        {
            mrr[j][i]=arr[i][j];
        }
    }

    printf("\nTranspose matrix : \n");

    for(i=0;i<row;i++)
    {
        for(j=0;j<row;j++)
        {
            printf("%d ",mrr[i][j]);
        }
        printf("\n");
    }

    return 0;
}
