#include<stdio.h>
int main()
{
    int arr[1000];
    int n,i,tofind,count;

    printf("Enter size of array : ");
    scanf("%d",&n);
    printf("Enter elements in the array : \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("Enter the number to find : ");
    scanf("%d",&tofind);

    for(i=0;i<n;i++)
    {
        if(arr[i]==tofind)
        {
            count=i+1;
            break;
        }
    }
    if(count==i+1)
    {
        printf("%d is at %d position.",tofind,count);
    }
    else
    {
        printf("Element is not found!");
    }

    return 0;
}
