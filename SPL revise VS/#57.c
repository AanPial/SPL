#include<stdio.h>
#define max 1000
int main()
{
    int arr[max];

    int size,i,j;

    printf("Enter size : ");
    scanf("%d",&size);

    printf("Enter elements : ");
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("Array : ");

    int Max=arr[0],ln;
    for(i=0;i<size;i++)
    {
        if(arr[i]>Max)
        {
            Max=arr[i];
            ln=i;
        }
    }
    for(i=ln;i<size-1;i++)
    {
        arr[i]=arr[i+1];
    }
    size--;
    printf("\n\nMax = %d\nln=%d\n",Max,ln);
    for(i=0;i<size;i++)
    {
        printf("%d ",arr[i]);
    }

    int ax=arr[0];
    for(i=0;i<size;i++)
    {
        if(arr[i]>ax)
        {
            ax=arr[i];
        }
    }
    printf("\n\nSecond largest number = %d\n",ax);

    return 0;
}

