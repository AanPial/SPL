#include<stdio.h>
#define MAX 100
int main()
{
    int arr[MAX][MAX],mrr[MAX][MAX];
    int i,j,row,col;

    printf("Enter row and column : ");
    scanf("%d%d",&row,&col);

    printf("Enter elements to the declared arrays :\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    printf("\n");

    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}
