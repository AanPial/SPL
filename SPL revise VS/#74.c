#include<stdio.h>
#define MAX 100
int main()
{
    int arr[MAX][MAX];
    int i,j,row,col,n;

    printf("Enter row and column : ");
    scanf("%d%d",&row,&col);

    printf("Input multiplier : ");
    scanf("%d",&n);

    printf("Enter elements to array 1 :\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    printf("\n");

    int mul[MAX][MAX];

    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            mul[i][j]=arr[i][j]*2;
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


