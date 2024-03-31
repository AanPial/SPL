#include<stdio.h>
int main()
{
    int n;
    printf("Enter number : ");
    scanf("%d",&n);

    int i,prod=1,temp;
    temp=n;
    for(i=0;n!=0;i++)
    {
        prod=prod*(n%10);
        n/=10;
    }
    printf("\nSum=%d\n",prod);

    return 0;
}

