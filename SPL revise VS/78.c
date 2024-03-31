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
    
    printf("\nReversed : \n");
    for (i = n-1; i >= 0; i--)
    {
        printf("%d ", arr[i]);
    }
    printf("\n\n");

    return 0;
}