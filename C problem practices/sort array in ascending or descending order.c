#include<stdio.h>
int main()
{
    int arr[1000];
    int n,i,j,temp;

    printf("Enter array size : ");
    scanf("%d",&n);
    printf("Enter elements in array : \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(arr[i]>arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    printf("\nElements of array in ascending order: ");
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\nElements of array in descending order: ");
    for(i=n-1;i>=0;i--)
    {
        printf("%d ",arr[i]);
    }

    return 0;
}
