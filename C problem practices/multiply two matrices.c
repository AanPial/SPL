#include<stdio.h>
int main()
{
    int n,i,j,k;
    printf("Enter n : ");
    scanf("%d",&n);

    int arr[n][n],mrr[n][n],trr[n][n];

    printf("Enter elements in matrix A of size 3x3: \n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    printf("Enter elements in matrix B of size 3x3: \n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&mrr[i][j]);
        }
    }

    //multiplying
    int sum=0;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            sum=0;
            for(k=0;k<n;k++)
            {
                sum=sum+arr[i][k]*mrr[k][j];
            }
            trr[i][j]=sum;
        }
    }
    printf("Product of matrix A * B = \n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d ",trr[i][j]);
        }
        printf("\n");
    }
}
