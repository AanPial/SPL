#include<stdio.h>
#define max 1000
int main()
{
    int arr[max];

    int size,i,sum=0;

    printf("Enter size : ");
    scanf("%d",&size);

    printf("Enter elements : ");
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }

    for(i=0;i<size;i++)
    {
        sum=sum+arr[i];
    }
    printf("\nSum : %d\n",sum);

    return 0;
}
