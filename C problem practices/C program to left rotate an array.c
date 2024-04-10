#include<stdio.h>
int main()
{
    int arr[100];
    int i,j,temp,N,n;

    printf("Enter array size : ");
    scanf("%d",&n);
    printf("Enter Elements : \n");
    for(i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Input number of times to rotate : ");
    scanf("%d",&N);


    for (i = 0; i < N-1; i++)
    {
        temp = arr[0];
        for (j = 0; j < n - 1; j++)
        {
            arr[j] = arr[j + 1];
        }
        arr[n - 1] = temp;
    }
    printf("Array after left rotation 3 times: ");
    for(i=0; i<n; i++)
    {
        printf("%d ",arr[i]);
    }

    return 0;
}
