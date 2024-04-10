#include<stdio.h>
int main()
{
    int n,i;

    printf("Enter the size of : ");
    scanf("%d",&n);

    int arr[n];

    printf("Enter %d elements in the array : %d\n",n,n);

    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("Elements in array are : ");
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }

    return 0;
}
