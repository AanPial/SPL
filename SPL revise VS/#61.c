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

    int Max=arr[0],smax;
    for(i=0;i<size;i++)
    {
        if(arr[i]>Max)
        {
            smax=Max;
            Max=arr[i];
        }
    }
    printf("\n\nSecond Max = %d\n",smax);


    return 0;
}
