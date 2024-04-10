#include<stdio.h>
int main()
{
    int row,col;

    printf("Enter Row : ");
    scanf("%d",&row);
    printf("Enter column : ");
    scanf("%d",&col);

    int arr[row][col];
    int i,j;

    printf("Enter num : \n");

    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }

    printf("The numbers are : \n");

    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
}

