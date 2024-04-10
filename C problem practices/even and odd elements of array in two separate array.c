#include<stdio.h>
int main()
{
    int arr[1000],err[1000],orr[1000];
    int i,n,j=0,k=0;
    int size1=0,size2=0;

    printf("Enter array size : ");
    scanf("%d",&n);

    printf("Enter elements in array : \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    for(i=0;i<n;i++)
    {
        if(arr[i]%2==0)
        {
            err[j]=arr[i];
            j++;
            size1++;
        }
        else
        {
            orr[k]=arr[i];
            k++;
            size2++;
        }
    }
    printf("Output even elements in array: ");
    for(i=0;i<size1;i++)
    {
        printf("%d ",err[i]);
    }
    printf("\nOutput Odd elements in array : ");
    for(i=0;i<size2;i++)
    {
        printf("%d ",orr[i]);
    }

    return 0;
}
