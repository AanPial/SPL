#include<stdio.h>
int main()
{
    int arr[1000];
    int i,n;

    printf("Enter array size : ");
    scanf("%d",&n);

    printf("Enter elements in array : ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Reversed array : ");
    for(i=n-1;i>=0;i--)
    {
        printf("%d ",arr[i]);
    }
    return 0;

}
