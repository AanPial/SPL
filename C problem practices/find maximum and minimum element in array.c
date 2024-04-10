#include<stdio.h>
const int max=100;
int main()
{
    int arr[max];
    int i,n,mx,min;

    printf("Enter array size : ");
    scanf("%d",&n);

    printf("Enter elements in the array: \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    mx=arr[0];
    min=arr[0];

    for(i=0;i<n;i++)
    {
        if(mx<arr[i])
        {
            mx=arr[i];
        }
        if(min>arr[i])
        {
            min=arr[i];
        }
    }
    printf("Maximum is : %d\n",mx);
    printf("Minimum is : %d",min);
}
