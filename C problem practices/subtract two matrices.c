#include<stdio.h>
int main()
{
    int n,i,j;
    printf("Enter n : ");
    scanf("%d",&n);
    int arr[n][n],mrr[n][n],trr[n][n];

    printf("Enter elements to matrix1 : \n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }

    printf("Enter elements to matrix2 : \n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&mrr[i][j]);
        }
    }
    int sum=0;
    printf("Sum of these two matrices : \n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            trr[i][j]=arr[i][j]-mrr[i][j];
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d ",trr[i][j]);
        }
        printf("\n");
    }


}
