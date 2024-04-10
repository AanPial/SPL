#include<stdio.h>
int main()
{
    int n;

    printf("Enter n : ");
    scanf("%d",&n);

    int temp=n,rev=0;

    while(temp!=0)
    {
        rev=rev*10;
        rev=rev+(temp%10);
        temp=temp/10;
    }

    if(n==rev)
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }
    return 0;
}
