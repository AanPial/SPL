#include<stdio.h>
#define max 3
int main()
{
    int arr[max][max],mrr[max][max],prr[max][max];
    int i,j,k;
    int sum;

    printf("Enter elements in the first matrix : \n");
    for(i=0;i<max;i++)
    {
        for(j=0;j<max;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    printf("Enter elements in the second matrix : \n");
    for(i=0;i<max;i++)
    {
        for(j=0;j<max;j++)
        {
            scanf("%d",&mrr[i][j]);
        }
    }

    for(i=0;i<max;i++)
    {
        for(j=0;j<max;j++)
        {
            sum=0;
            for(k=0;k<max;k++)
            {
                sum+=arr[i][k]*mrr[k][j];
            }
            prr[i][j]=sum;
        }
    }

    printf("Output : \n");
    for(i=0;i<max;i++)
    {
        for(j=0;j<max;j++)
        {
            printf("%d ",prr[i][j]);
        }
        printf("\n");
    }
}
