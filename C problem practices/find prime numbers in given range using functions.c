//find prime numbers in given range using functions

#include<stdio.h>

void primer(int n,int m)
{
    int i,j;
    int prime=1;
    int temp;

    for(i=n;i<m;i++)
    {
       temp=i;
    for(j=2;j<temp;j++)
    {
       if(temp%j==0)
       {
          prime=0;
          break;
       }
    }
    if(prime==1)
    {
       printf("%d ",temp);
    }
    temp=0;
    prime=1;
    }

}

int main()
{
    int n,m;

    printf("Enter number : ");
    scanf("%d",&n);
    scanf("%d",&m);

    primer(n,m);

    return 0;
}
