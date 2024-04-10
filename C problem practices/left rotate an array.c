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
    printf("Input number of times to rotate: ");
    scanf("%d",&N);
    //copy from one array to another array
    for(i=0;i<N;i++)
    {
        mrr[k]=arr[i];
        k++;
        size1++;
    }
    printf("Array after left rotation 3 times left: \n");
    for(i=N-1;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    for(i=0;i<size1-1;i++)
    {
        printf("%d ",mrr[i]);
    }

    return 0;
}
