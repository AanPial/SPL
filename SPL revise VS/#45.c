#include<stdio.h>
int main()
{
    int n,i,l,sum=0;

    printf("Enter number : ");
    scanf("%d",&n);

    int temp=n;

    while(n!=0)
    {
        l=n%10;
        sum=sum+pow(l,3);
        n=n/10;
    }

    if(sum==temp)
    {
        printf("Armstrong Number.");
    }
    else
    {
        printf("Not Armstrong");
    }
    return 0;
}
