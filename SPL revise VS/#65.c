#include<stdio.h>
#define MAX 1000
int main()
{
    int arr[MAX],mrr[MAX];

    int n,i;

    printf("Enter size : ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        mrr[i]=-1;
    }
    int count=1;;
    for(i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]==arr[j])
            {
                count++;
                mrr[j]=0;
            }
        }
        if(mrr[i]!=0)
        {
            mrr[i]=count;
        }
        count=1;
    }
    printf("\nUnique numbers : ");
    for(i=0;i<n;i++)
    {
        if(mrr[i]==1)
        {
            printf("%d ",arr[i]);
        }
    }
    printf("\n");

    return 0;
}

