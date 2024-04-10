#include<stdio.h>
void printarr(int *arr,int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
}

int main()
{
    int arr[100],mrr[100];
    int i,n;

    printf("Enter size : ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        scanf("%d",arr+i);
    }
    printf("\nBefore copying the pointer, main array : \n");
    printarr(arr,n);
    printf("\nBefore copying the pointer , destiny array : \n");
    printarr(mrr,n);

    for(i=0;i<n;i++)
    {
        *(mrr+i)=*(arr+i);
    }
    printf("\nAfter copying the pointer, main array : \n");
    printarr(arr,n);
    printf("\nAfter copying the pointer , destiny array : \n");
    printarr(mrr,n);

    return 0;
}
