#include<stdio.h>

int main()
{
    int arr[1000];
    int i,n;

    printf("Enter array size : ");
    scanf("%d",&n);
    printf("Enter elements in array : \n");
    for(i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    int pos,insrt,poss;

    printf("Enter element to insert : ");
    scanf("%d",&insrt);
    printf("Enter the element position  : ");
    scanf("%d",&pos);
    poss=pos-1;

    if(poss>n-1 || poss<0)
    {
        printf("Invalid Position.");
    }
    else
    {
        arr[poss]=insrt;
        for(i=0; i<n; i++)
        {
            printf("%d ",arr[i]);
        }
    }
    return 0;
}
