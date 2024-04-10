#include<stdio.h>
int main()
{
    int n,i,j;
    printf("Enter n : ");
    scanf("%d",&n);

    int arr[n][n],mrr[n][n];

    printf("Enter elements to array 1 : \n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    printf("Enter elements to array 2 : \n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&mrr[i][j]);
        }
    }
    //comparing
    int match=1;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(arr[i][j]!=mrr[i][j])
            {
                match=0;
                break;
            }
        }
    }
    printf("\n");
    if(match == 1)
    {
        printf("Both matrices are equal");
    }
    else
    {
        printf("Both matrices are not equal");
    }
    printf("\n");
    return 0;
}
