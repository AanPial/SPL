#include<stdio.h>
int main()
{
    int n,rev,temp;

    printf("Enter number : ");
    scanf("%d",&n);

    temp=n;

    for(rev=0;temp>0;temp/=10)
    {
        rev=rev*10;
        rev=rev+(temp%10);
    }
    printf("%d",rev);

    return 0;
}
