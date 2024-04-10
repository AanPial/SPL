#include<stdio.h>
int main()
{
    int n;
    printf("Enter array size : ");
    scanf("%d",&n);

    int i,j,sum=0;
    int arr[n][n];

    printf("Enter elements : \n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }

    for(i=0;i<n;i++)
    {
        sum+=arr[i][n-i-1];
    }
    printf("\nSum of minor diagonal elements = %d\n",sum);

    return 0;
}

