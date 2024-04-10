#include<stdio.h>
const int max=1000;

int main()
{
    int arr[max];
    int n,i,neg=0,pos=0;

    printf("Enter size of array : ");
    scanf("%d",&n);

    printf("Enter elements in array : \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]<0)
        {
          neg++;
        }
        else
        {
          pos++;
        }
    }
    printf("Total negative elements in array : %d",neg);
    printf("\nTotal positive  elements in array : %d",pos);

    return 0;
}
