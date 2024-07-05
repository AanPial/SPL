#include<stdio.h>
int print(int n);
int main()
{
    int n;
    scanf("%d",&n);
    print(n);
}
int print(int n)
{
    printf("%d ",n);
    if(n<=1)
    {
        return 0;
    }
    print(n-1);
}