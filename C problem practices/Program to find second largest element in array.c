#include<stdio.h>
const int higst =1000;

int main()
{
    int arr[higst];
    int n,i,max,max2;

    printf("Enter size of array (1-1000): ");
    scanf("%d",&n);

    printf("Enter elements in the array : \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    max=arr[0];
    max2=arr[0];
    for(i=0;i<n;i++)
    {
        if(arr[i]>max)
        {
        max=arr[i];
        }
    }
    printf("First Largest : %d",max);
    for(i=0;i<n;i++)
    {
        if(arr[i]>max2 && arr[i]<max)
        {
        max2=arr[i];
        }
    }
    printf("\nSecond Lergest : %d",max2);

    return 0;
}
