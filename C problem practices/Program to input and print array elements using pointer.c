#include<stdio.h>
int main()
{
    int arr[10000],n;
    printf("Enter size : ");
    scanf("%d",&n);
    int *ptr;

    ptr=arr;

    for(int i=0;i<n;i++)
    {
        scanf("%d",ptr+i);
    }
    for(int i=0;i<n;i++)
    {
        printf("%d ",*(ptr+i));
    }

    return 0;
}
