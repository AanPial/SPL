#include<stdio.h>
int main()
{
    int n,last,first,digit,div,sum,rev;

    printf("Enter Number : ");
    scanf("%d",&n);

    digit=log10(n);
    div=pow(10,digit);

    first=n/div;
    n=n%div;
    last=n%10;
    n=n/10;

    sum=first+last;

    rev=last*div+n*10+first;

    printf("First number : %d\n",first);
    printf("Last number : %d\n",last);

    printf("Sum of first and last digits : %d",sum);

    printf("\nAfter Swap : %d",rev);

    return 0;
}

