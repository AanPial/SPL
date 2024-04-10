#include<stdio.h>

int DemogorgonNumber (int a)
{
    int n=a;
    int y=checkerFunc1(n);
    int z=primeChecker(n);

    if(y==1 && z==1)
    {
        return 1;
    }
    else
    {
        return -1;
    }
}
int primeChecker (int c)
{
    int temp=c;
    int i,prime=1;
    for(i=2; i<c; i++)
    {
        if(c%i==0)
        {
            prime=0;
            break;
        }
    }
    if(prime==1)
    {
        return 1;
    }
    else
    {
        return -1;
    }
}
int checkerFunc1 (int b)
{
    int rev=0,temp;
    temp=b;
    while(temp>0)
    {
        rev=rev*10;
        rev=rev+(temp%10);
        temp/=10;
    }
    int temp1,count=1;
    temp1=rev;
    int oddsum=0,evensum=0;

    while(temp1>0)
    {
        int lev=temp1%10;
        if(lev%2==0)
        {
            evensum=evensum+(lev);
        }
        else
        {
            oddsum=oddsum+(lev);
        }
        temp1/=10;
    }

    if(oddsum<evensum)
    {
        return 1;
    }
    else
    {
        return -1;
    }
}
int main()
{
    int n,m;

    printf("Enter a number : ");
    scanf("%d",&n);
    printf("Enter a number : ");
    scanf("%d",&m);

    int i;
    for(i=n; i<=m; i++)
    {
        int x=DemogorgonNumber(i);
        if(x==1)
        {
            printf("%d\n",i);
        }
    }

    return 0;

}
