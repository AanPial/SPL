#include<stdio.h>
int main()
{
    int row,col,i,j;

    printf("Enter row : ");
    scanf("%d",&row);
    printf("Enter column : ");
    scanf("%d",&col);

    float matrix1[row][col],matrix2[row][col];
    float result[row][col];

    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("u%d : ",j+1);
            scanf("%f",&matrix1[i][j]);
        }
    }
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("u%d : ",j+1);
            scanf("%f",&matrix2[i][j]);
        }
    }
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            result[i][j]=matrix1[i][j]+matrix2[i][j];
        }
    }

    printf("Sum of Matrix : \n");

    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("%.2f  ",result[i][j]);

            if(j==col-1)
            {
                printf("\n");
            }
        }
    }

    return 0;
}
