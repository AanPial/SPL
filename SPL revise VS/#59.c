#include<stdio.h>
#define max 1000
int main()
{
    int arr[max];

    int size,i,count=0;

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
            count++;
        }
    }
    printf("Total Negative : %d\n",count);

    return 0;
}

