#include<stdio.h>
int main()
{
    int arr[100],mrr[100],merg[200];
    int size1,size2,mergsize;
    int i,j,k,l;

    printf("Enter array 1 size and elements :");
    scanf("%d",&size1);
    for(i=0;i<size1;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter array 2 size and elements : ");
    scanf("%d",&size2);
    for(i=0;i<size2;i++)
    {
        scanf("%d",&mrr[i]);
    }

    mergsize=size1+size2;

    j=0;
    k=0;

    for(l=0;l<mergsize;i++)
    {
        if(j>=size1 || k>=size2)
        {
            break;
        }
        if(arr[j]<mrr[k])
        {
            merg[l]=arr[j];
            j++;
        }
        else
        {
            merg[l]=mrr[k];
            k++;
        }
    }
    while(j<size1)
    {
        merg[l]=arr[j];
        j++;
        l++;
    }
    while(k<size2)
    {
        merg[l]=mrr[k];
        k++;
        l++;
    }

    printf("Merged array : ");
    for(i=0;i<mergsize;i++)
    {
        printf("%d ",merg[i]);
    }

    return 0;

}

