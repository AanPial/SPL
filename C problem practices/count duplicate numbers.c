#include<stdio.h>

int main()
{
    int arr[1000],freq[1000];
    int i,j,n,count2=0,count;

    printf("Enter the size of array : ");
    scanf("%d",&n);

    printf("Enter elements in the array :\n");
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
                freq[i]=0;
                count++;
            }
        }
        if(freq[i]!=0)
        {
            freq[i]=count;
        }

    }
    for(i=0;i<n;i++)
    {
        if(freq[i]==0)
        {
            count2++;
        }
    }
    printf("Total Number of duplicate elements : %d",count2);

    return 0;
}
