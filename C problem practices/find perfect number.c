#include<stdio.h>
int main()
{
    int n,i;
    int sum=0;

    printf("Enter number :\n");
    scanf("%d",&n);

    for(i=1;i<n;i++)
    {
        if(n%i==0)
        {
           sum+=i;
        }
    }
    printf("\n%d\n",sum);

    if(sum==n)
    {
        printf("\nPerfect Number.\n");
    }
    else
    {
        printf("\nNot perfect number.\n");
    }

    return 0;
}
