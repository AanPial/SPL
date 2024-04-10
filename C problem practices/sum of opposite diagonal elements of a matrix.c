#include<stdio.h>
int main()
{
    int n;
    printf("Enter n : ");
    scanf("%d",&n);
    int i,j;

    int arr[n][n];

    printf("Enter elements to the array : \n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    int sum=0;
    for(i=n-1;i>=0;i--)
    {
        sum=sum+arr[i][i];
    }
    printf("\nSum of minor elements = %d\n",sum);

    return 0;
}
