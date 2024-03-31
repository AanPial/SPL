#include<stdio.h>
int main()
{
    int n;

    printf("Enter number : ");
    scanf("%d",&n);

    int rev=0;

    while(n!=0)
    {
        rev=(rev*10)+(n%10);
        n/=10;
    }
    printf("\nReverse = %d\n",rev);

    return 0;
}
