#include<stdio.h>
int main()
{
    int arr[100];

    int n,i,pos;

    printf("Enter the size of array : ");
    scanf("%d",&n);

    printf("Enter elements in the array : \n");
    for(i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("Enter the position : ");
    scanf("%d",&pos);
    if(pos>n || pos<0)
    {
        printf("Invalid Position.");
    }
    else
    {
        for(i=pos-1; i<n-1; i++)
        {
            arr[i]=arr[i+1];
        }
        n--;

        printf("Elements of array after delete are : ");
        for(i=0; i<n; i++)
        {
            printf("%d ",arr[i]);
        }
    }
    return 0;

}
