//Ans to the question no # (9)

#include<stdio.h>
int main()
{

    int arr[1000];
    int even[1000],odd[1000];
    int n,i,j=0,k=0,size=0,size1=0;

    printf("Enter size : ");
    scanf("%d",&n);

    printf("Input : ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }


    for(i=0; i<n; i++)
    {
        if(arr[i]%2==0)
        {
            even[j]=arr[i];
            j++;
            size++;
        }
        else
        {
            odd[k]=arr[i];
            k++;
            size1++;
        }
    }

    j=0;
    k=0;
    for(i=0; i<n; i++)
    {
        if(i%2==0 && j<size)
        {
            arr[i]=even[j];
            j++;
        }
        else if(i%2!=0 && k<size1)
        {
            arr[i]=odd[k];
            k++;
        }
    }

    printf("\nOutput : ");
    for(i=0; i<n; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    return 0;
}
