#include<stdio.h>
int main()
{
    int arr[100],mrr[100];
    int i,n,j;

    printf("Enter array size : ");
    scanf("%d",&n);
    printf("Enter elements in array : ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        mrr[i]=arr[n-i-1];
    }
    printf("Reversed elements : ");
    for(i=0;i<n;i++)
    {
        printf("%d ",mrr[i]);
    }

    return 0;

}
