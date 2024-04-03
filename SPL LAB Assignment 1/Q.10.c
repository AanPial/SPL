//Ans to the question no # (10)

#include <stdio.h>

int main()
{
    int n;
    printf("Enter size : ");
    scanf("%d",&n);
    int arr[n];
    int i, tarc;

    printf("Input : ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < n; i++)
    {
        while(arr[i]!=i&&arr[i]< n)
        {
            tarc=arr[i];
            arr[i]=arr[tarc];
            arr[tarc]=tarc;
        }
    }

    printf("\nOutput : ");
    for (i=0; i<n; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");

    return 0;
}


