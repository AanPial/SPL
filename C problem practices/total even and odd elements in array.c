#include<stdio.h>
const int max=1000;

int main()
{
    int arr[max];
    int n,i,count1=0,count2=0;

    printf("Enter array size : ");
    scanf("%d",&n);

    printf("Enter array elements : \n");

    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    for(i=0;i<n;i++)
    {
        if(arr[i]%2==0)
        {
        count1++;
        }
        else
        {
        count2++;
        }
    }
    printf("Total even elements : %d\n",count1);
    printf("Total odd elements : %d",count2);

    return 0;
}
