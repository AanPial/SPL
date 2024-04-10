#include<stdio.h>
int main()
{
    int n,count=0,i;

    printf("Input num: ");
    scanf("%d",&n);

    while(n!=0)
    {
        n/=10;
        count++;
    }
    printf("Number of digits : %d",count);

    return 0;
}
