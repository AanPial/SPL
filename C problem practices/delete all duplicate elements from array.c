#include<stdio.h>
int main()
{
    int arr[1000];
    int n,i,j,k;

    printf("Enter the size of array : ");
    scanf("%d",&n);

    printf("Enter elements in array : \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(arr[i]== arr[j])
            {
                for(k=j;k<n-1;k++)
                {
                    arr[k]=arr[k+1];
                }
                n--;
                j--;
            }
        }
    }
    printf("Array elements after deleting duplicates : ");
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}
