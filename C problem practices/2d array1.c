#include<stdio.h>
int main()
{
    int i,j;
    int matrix [4][3];

    printf("Enter elements is matrix : ");

    for(i=0;i<4;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&matrix[i][j]);
        }
    }

    printf("Matrix is :\n");

    for(i=0;i<4;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d ",matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}
