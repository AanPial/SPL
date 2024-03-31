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
    
    int evarr[MAX],oddarr[MAX];
    
    int size1=0,size2=0;

    for(i=0;i<n;i++)
    {
        if(arr[i]%2==0)
        {
            evarr[size1]=arr[i];
            size1++;
        }
        else
        {
            oddarr[size2]=arr[i];
            size2++;
        }
    }
    printf("\nEven : ");
    for(i=0;i<size1;i++)
    {
        printf("%d ",evarr[i]);
    }

    printf("\nOdd : ");

    for(i=0;i<size2;i++)
    {
        printf("%d ",oddarr[i]);
    }


    printf("\n\n");

    return 0;
}