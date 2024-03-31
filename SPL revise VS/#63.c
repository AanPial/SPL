#include<stdio.h>
#define MAX 1000
int main()
{
    int arr[MAX];

    int n,i;

    printf("Enter size : ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int m;
    printf("Enter the position to delete : ");
    scanf("%d",&m);

    for(i=m-1;i<n-1;i++)
    {
        arr[i]=arr[i+1];
    }
    n--;

    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");

    return 0;
}

