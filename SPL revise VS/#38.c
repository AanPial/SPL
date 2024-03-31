#include<stdio.h>
int main()
{
    int n;

    printf("Enter number : ");
    scanf("%d",&n);

    int rev=0,temp;
    temp=n;

    while(n!=0)
    {
        rev=(rev*10)+(n%10);
        n/=10;
    }
    printf("\nReverse = %d\n",rev);
    if(rev==temp)
    {
        printf("\nPalindrom!\n");
    }
    else
    {
        printf("\nNot palindrom.\n");
    }

    return 0;
}
