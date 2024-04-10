#include<stdio.h>
int main()
{
    int arr[100],mrr[100],frr[100];
    int i,N,k=0,l=0;
    int n,size1,size2;

    printf("Enter size : ");
    scanf("%d",&n);
    printf("Input elements in array: \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Array after right rotation 3 times left: \n");
    scanf("%d",&N);
    //copy from one array to another array
    for(i=n-N;i<=n;i++)
    {
        mrr[k]=arr[i];
        k++;
        size1++;
    }
    printf("Array after right rotation 3 times right: \n");
    for(i=0;i<size1-1;i++)
    {
        printf("%d ",mrr[i]);
    }
    for(i=0;i<n-N;i++)
    {
        printf("%d ",arr[i]);
    }

    return 0;
}
