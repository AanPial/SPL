#include<stdio.h>
int convBase(int x)
{
    int sum=0,div=0;
    while(x>0)
    {
        sum=sum+(x%6)*pow(10,div);
        div++;
        x=x/6;
    }
    printf("Sum : %d\n",sum);
    return sum;
}
int funcdiv(int n)
{
    int sum=0;
    while(n>0)
    {
        sum=sum+(n%10);
        n=n/10;
    }
    if(sum%5==0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int primeChecker(int a,int b)
{
    int i,j;
    int count=0;
    for(i=a;i<b;i++)
    {
        int prime=1;
        for(j=2;j<i;j++)
        {
            if(i%j==0)
            {
                prime=0;
                break;
            }
        }
        if(prime==1 && i!=0 && i!=1)
        {
            count++;
        }
    }
    return count;

}
int main()
{
    int n;
    printf("Enter an integer : ");
    scanf("%d",&n);
    int bs=convBase(n);
    int s1=funcdiv(bs);
    int first,last;
    int dig,div;
    dig=log10(n);
    div=pow(10,dig);
    first=n/div;
    last=n%10;
    int sumfl=first+last;
    int s2=primeChecker(0,sumfl);

    if(s1==1 || s1>4)
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }
    return 0;
}
