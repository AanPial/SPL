#include<stdio.h>
int main()
{
    int n,count=0;

    printf("Enter your Number:");
    scanf("%d",&n);

    while(n!=0)
    {
        n/=10;
        count++;
    }
    printf("There are %d digits in your Number.",count);

    return 0;
}
