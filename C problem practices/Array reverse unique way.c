#include<stdio.h>
int main()
{
    int arr[1000];
    int i,n,lol;

    printf("Enter array size : ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<=n/2;i++)
    {
        lol=arr[i];
        arr[i]=arr[n-i-1];
        arr[n-i-1]=lol;
        lol=0;
    }
    printf("Reversed array : ");
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }

    return 0;

}
