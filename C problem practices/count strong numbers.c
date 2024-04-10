#include<stdio.h>

int main()
{
    int m,n,fact=1,i,temp,j,sum,st,count=0;

    printf("Enter the Number : \n");
    scanf("%d%d",&n,&m);

    printf("Strong numbers : \n");
    for(j=n+1;j<m;j++)
    {
    temp=j;
    for(sum=0;temp!=0;temp/=10)
    {
    st=temp%10;

    for(i=1;i<=st;i++)
    {
        fact=fact*i;
    }
    sum=sum+fact;
    fact=1;
    }
    if(sum==j)
    {
    printf("%d\n",sum);
    count++;
    }
    }
    printf("Total strong numbers are : %d",count);
    return 0;
}
