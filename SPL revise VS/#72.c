#include<stdio.h>
#define MAX 100
int main()
{
    int arr[MAX][MAX],mrr[MAX][MAX];
    int i,j,row,col;

    printf("Enter row and column : ");
    scanf("%d%d",&row,&col);

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

    int sum[MAX][MAX];

    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            sum[i][j]=arr[i][j]+mrr[i][j];
        }
    }

    printf("\nSum: \n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("%d ",sum[i][j]);
        }
        printf("\n");
    }

    return 0;
}
