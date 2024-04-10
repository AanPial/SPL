#include<stdio.h>
int main()
{
    int n,i;
    printf("Enter array size : ");
    scanf("%d",&n);
    printf("Enter size of the array : %d",n);

    int arr[n];
    printf("Enter elements in array : \n");

    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("All negative elements in array are : \n");

    for(i=0;i<n;i++)
    {
        if(arr[i]<0)
        {
            printf("%d ",arr[i]);
        }
    }
    return 0;

}
