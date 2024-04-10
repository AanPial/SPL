#include<stdio.h>
int main()
{
    int n;
    printf("Enter n : ");
    scanf("%d",&n);

    int arr[n][n];
    int sum=0,i,j;

    printf("Enter elements in the array : \n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }

    for(i=0;i<n;i++)
    {
        sum=sum+arr[i][i];
    }

    printf("\nSum of main diagonal elements = %d\n",sum);

    return 0;
}
