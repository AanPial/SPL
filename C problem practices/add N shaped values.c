#include<stdio.h>
int main()
{
    int arr[4][4];
    int i,j;
    printf("Enter elements : \n");
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    //sum of col1
    int sum=0;
    for(i=0;i<4;i++)
    {
        sum+=arr[i][0]+arr[i][i]+arr[i][3];
    }

    printf("%d",sum-(arr[0][0]+arr[3][3]));

    return 0;
}
