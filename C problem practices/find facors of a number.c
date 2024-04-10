#include<stdio.h>
int main()
{
    int n,i,count=0,temp;

    printf("Enter the number : ");
    scanf("%d",&n);

    temp=n;

    printf("Factors are : ");

    for(i=1;i<=n;i++)
    {
        if(temp%i==0)
        {
            printf("%d ",i);
            count++;
        }

    }
    printf("\nThere are %d factors.\n",count);

    return 0;
}

