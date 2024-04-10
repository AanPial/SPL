#include<stdio.h>
int main()
{
    int n,prod;

    printf("Enter number : ");
    scanf("%d",&n);

    for(prod=1;n!=0;n/=10)
    {
        prod=prod*(n%10);
    }
    printf("Product of digits : %d",prod);

    return 0;
}
