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
    int low=1;

    for(i=0;i<row;i++)
    {
        for(j=0;j<row;j++)
        {
            if(i<j && arr[i][j]!=0)
            {
                low=0;
            }
        }
    }

    if(low==1)
    {
        printf("\nLower triangular matrix\n");
    }
    else
    {
        printf("\nNOt Lower triangular matrix\n");
    }

    return 0;
}
