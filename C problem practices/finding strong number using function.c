#include<stdio.h>

void strong(int n,int m)
{
   int i,j,k,temp,arc;
    int sum,product=1;

   for(k=n;k<=m;k++)
    {
       temp=k;
    for(sum=0;temp!=0;temp/=10)
    {
       arc=temp%10;
       for(j=1;j<=arc;j++)
       {
          product=product*j;
       }
       sum+=product;
       product=1;
    }
    if(k==sum)
    {
       printf("%d ",k);
    }
    sum=0;
    product=1;

    }
}
int main()
{
    int n,m;
    int sum,product=1;

    printf("Enter number : ");
    scanf("%d%d",&n,&m);

    strong(n,m);

    return 0;
}
