#include<stdio.h>
#define max 1000
int main()
{
    int arr[max];

    int size,i;

    printf("Enter size : ");
    scanf("%d",&size);

    printf("Enter elements : ");
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("Array : ");
    for(i=0;i<size;i++)
    {
        if(arr[i]<0)
        {
            printf("%d ",arr[i]);
        }
    }

    return 0;
}
