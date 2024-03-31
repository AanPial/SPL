#include<stdio.h>
#define max 1000
int main()
{
    int arr[max],mrr[max];

    int size,i;

    printf("Enter size : ");
    scanf("%d",&size);

    printf("Enter elements : ");
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("Array1 : ");
    for(i=0;i<size;i++)
    {
        printf("%d ",arr[i]);
    }
    for(i=0;i<size;i++)
    {
        mrr[i]=arr[i];
    }
    printf("\nArray 2 : ");
    for(i=0;i<size;i++)
    {
        printf("%d ",mrr[i]);
    }

    return 0;
}

