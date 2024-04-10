#include<stdio.h>
int main()
{
    int arr[100];
    int n,i;

    printf("Enter n : ");
    scanf("%d",&n);
    int *ptr=arr;
    for(i=0;i<n;i++)
    {
        scanf("%d",ptr+i);
    }

    printf("So : ");
    for(i=0;i<n;i++)
    {
        printf("%d ",*ptr+i);
    }

    return 0;
}
