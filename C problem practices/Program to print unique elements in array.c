#include<stdio.h>
int main()
{
    int arr[1000],freq[1000];
    int n,i,j,count;

    printf("Enter the size of array : ");
    scanf("%d",&n);

    printf("Enter elements in array : \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        freq[i]=-1;
    }
    for(i=0;i<n;i++)
    {
        count=1;
        for(j=i+1;j<n;j++)
        {
            if(arr[i]==arr[j])
            {
                count++;
                freq[j]=0;
            }
        }
        if(freq[i]!=0)
        {
            freq[i]=count;
        }
    }
    printf("\nUnique elements in the array are:");
    for(i=0;i<n;i++)
    {
        if(freq[i]==1)
        {
            printf("%d ",arr[i]);
        }
    }
    return 0;
}
