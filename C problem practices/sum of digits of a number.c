#include<stdio.h>
int main()
{
    int n,sum;

    printf("Enter number : ");
    scanf("%d",&n);

    for(sum=0;n!=0;n/=10)
    {
        sum=sum+(n%10);
    }
    printf("Sum of digits : %d",sum);

    return 0;
}
