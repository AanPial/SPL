#include<stdio.h>
int main()
{
    int n;
    printf("Enter number : ");
    scanf("%d",&n);

    int last,first,digit,dev;

    last=n%10;
    digit=log10(n);
    dev=pow(10,digit);
    first=n/dev;

    printf("First Digit = %d\n",first);
    printf("Last Digit = %d\n",last);

    return 0;
}
