#include<stdio.h>
#define MAX 100
int main()
{
    int arr[MAX][MAX];
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
    int sum=0;

    for(i=0;i<row;i++)
    {
        sum=sum+arr[i][row-i-1];
    }

    printf("\nSum = %d\n",sum);

    return 0;
}
