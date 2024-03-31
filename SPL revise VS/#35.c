#include<stdio.h>
int main()
{
    int n;
    printf("Enter number : ");
    scanf("%d",&n);

    int i,sum=0,temp;
    temp=n;
    for(i=0;n!=0;i++)
    {
        sum=sum+(n%10);
        n/=10;
    }
    printf("\nSum=%d\n",sum);

    return 0;
}

