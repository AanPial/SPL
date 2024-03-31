#include<stdio.h>
int add(int n,int m);
int main()
{
    int a,b,sum;

    printf("Enter two numbers : ");
    scanf("%d%d",&a,&b);

    sum=add(a,b);

    printf("\nSum = %d\n\n",sum);
}
int add(int n,int m)
{
    int s=n+m;
    return s;
}
