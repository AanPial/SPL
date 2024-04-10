#include<stdio.h>
int main()
{
    int n;
    printf("Enter n : ");
    scanf("%d",&n);

    int i,j;
    int arr[n][n];

    printf("Enter elements in array : \n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    int sum=0;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            sum=sum+arr[i][j];
        }
        printf("Sum of row%d = %d\n",i+1,sum);
        sum=0;
    }

    for(j=0;j<n;j++)
    {
        for(i=0;i<n;i++)
        {
            sum=sum+arr[i][j];
        }
        printf("Sum of column%d = %d\n",j+1,sum);
        sum=0;
    }

    return 0;
}
