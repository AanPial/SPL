#include<stdio.h>
int main()
{
    int arr[100];
    int n,i,pos,item;

    printf("Enter the size of array : ");
    scanf("%d",&n);
    printf("Enter elements in array : \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter the position : ");
    scanf("%d",&pos);
    printf("Enter the item : ");
    scanf("%d",&item);

    if(pos>n+1 || pos<=0)
    {
        printf("Invalid position.");
    }
    else
    {
        for(i=n;i>=pos;i--)
        {
            arr[i]=arr[i-1];
        }
        arr[pos-1]=item;

        printf("Array elements after insertion : ");
        for(i=0;i<n;i++)
        {
            printf("%d ",arr[i]);
        }
    }
    return 0;
}
