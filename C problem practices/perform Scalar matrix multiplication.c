#include<stdio.h>
#define max 3
int main()
{
    int arr[max][max];
    int i,j,n,m;

    printf("Enter elements in array : \n");
    for(i=0;i<max;i++)
    {
        for(j=0;j<max;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    printf("Input multiplier: ");
    scanf("%d",&m);

    for(i=0;i<max;i++)
    {
        for(j=0;j<max;j++)
        {
            arr[i][j]=m*arr[i][j];
        }
    }

    printf("Output : \n");

    for(i=0;i<max;i++)
    {
        for(j=0;j<max;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }

    return 0;

}
