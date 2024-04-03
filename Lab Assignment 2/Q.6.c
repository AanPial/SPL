#include <stdio.h>

int isPrime(int n)
{
    int i;
    if (n<=1)
    {
        return 0;
    }
    for (i=2;i*i<=n;++i)
    {
        if(n%i==0)
        {
            return 0;
        }
    }
    return 1;
}
int sumOfDigits(int n)
{
    int sum = 0;
    while (n>0)
    {
        sum+=n%10;
        n/=10;
    }
    return sum;
}

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);

    int sum=0;
    int temp=n;
    while (temp>0)
    {
        sum+=temp%6;
        temp/=6;
    }

    int primeCount=0;
    for (int i=2;i<=n;++i)
    {
        if (isPrime(i))
            {
                primeCount++;
            }
    }

    int first = n % 10;
    int last = n;
    while (last >= 10)
    {
        last/=10;
    }

    if ((sum % 5 == 0) || (primeCount > 4 && primeCount < first + last))
    {
        printf("Yes\n");
    }
    else
    {
        printf("No\n");
    }

    return 0;

}
