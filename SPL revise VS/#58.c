#include<stdio.h>
#define max 1000
int main()
{
    int arr[max];

    int size,i,countev=0,countodd=0;

    printf("Enter size : ");
    scanf("%d",&size);

    printf("Enter elements : ");
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }

    for(i=0;i<size;i++)
    {
        if(arr[i]%2==0)
        {
            countev++;
        }
        else
        {
            countodd++;
        }
    }
    printf("Even : %d\n",countev);
    printf("Odd : %d\n",countodd);

    return 0;
}
