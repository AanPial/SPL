#include <stdio.h>
#define MAX 1000
int main()
{
    int arr[MAX];

    int n, i;

    printf("Enter size : ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int temp;
    for (i = 0; i < n/2; i++)
    {
        temp=arr[i];
        arr[i]=arr[n-i-1];
        arr[n-i-1]=temp;
    }

    printf("\nReversed : \n");
    for (i = 0; i<n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n\n");

    return 0;
}