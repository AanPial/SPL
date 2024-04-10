#include<stdio.h>
int main()
{
    int arr[1000];
    int n,i;

    scanf("%d",&n);

    printf("Enter elements in array : \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int max=arr[0];
    for(i=0;i<n;i++)
    {
        if(max<arr[i])
        {
            max=arr[i];
        }
    }
    int min=arr[0];
    for(i=0;i<n;i++)
    {
        if(min>arr[i])
        {
            min=arr[i];
        }
    }

    printf("\n");
    printf("Elements with largest difference are : %d and %d",min,max);
    printf("\n");
    return 0;
}
