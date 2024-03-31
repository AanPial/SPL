#include<stdio.h>
int main()
{
    int i,size;

    printf("Enter size : ");
    scanf("%d",&size);

    int arr[size];

    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("Array : ");

    for(i=0;i<size;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    return 0;
}
