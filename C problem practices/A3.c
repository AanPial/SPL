#include<stdio.h>
int is_prime(int b)
{
    int prime=1,i;
    for(i=2;i<b;i++)
    {
        if(b%i==0)
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
        return 0;
    }
}
int power_of_2(int c)
{

    if(c==1)
    {
        return 1;
    }
    if(c%2!=0 || c==0)
    {
        return 0;
    }
    return power_of_2(c/2);
}

int is_mersenne(int a)
{
    int prime=is_prime(a);
    int po2=power_of_2(a+1);

    if(prime ==1 && po2==1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int n;

    printf("Enter a integer : ");
    scanf("%d",&n);
    int mers=is_mersenne(n);

    if(mers==1)
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }

    return 0;
}
