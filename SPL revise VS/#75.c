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

    int mul[MAX][MAX],k,sum=0;

    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            sum=0;
            for(k=0;k<row;k++)
            {
                sum+=arr[i][k]*mrr[k][j];
            }
            mul[i][j]=sum;
        }
    }

    printf("\nSum: \n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("%d ",mul[i][j]);
        }
        printf("\n");
    }

    return 0;
}
