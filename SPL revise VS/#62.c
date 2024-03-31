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
    printf("Enter the number to insert : ");
    scanf("%d",&m);
    int p;
    printf("Enter the position : ");
    scanf("%d",&p);

    arr[p-1]=m;
    printf("\n\nArray : ");
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    return 0;
}
