#include <stdio.h>
#define MAX 1000
int main()
{
    int arr[MAX],mrr[MAX];

    int n, i;

    printf("Enter size : ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int temp;
    for (i = 0; i < n; i++)
    {
        mrr[i]=arr[n-i-1];
    }

    printf("\nReversed : \n");
    for (i = 0; i<n; i++)
    {
        printf("%d ", mrr[i]);
    }
    printf("\n\n");

    return 0;
}
