#include<stdio.h>
int main()
{
    int n,i,j,m;
    printf("Enter n : ");
    scanf("%d",&n);
    int arr[n][n],trr[n][n];
    printf("Input multiplier : ");
    scanf("%d",&m);
    int sum=0;

    printf("Enter elements to matrix1 : \n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    printf("Sum of these two matrices : \n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            trr[i][j]=arr[i][j]*m;
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
