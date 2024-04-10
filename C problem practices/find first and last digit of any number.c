#include<stdio.h>
int main()
{
    int n,last,first,digit,div,sum;

    printf("Enter Number : ");
    scanf("%d",&n);

    digit=log10(n);
    div=pow(10,digit);

    first=n/div;
    n=n%div;
    last=n%10;
    n=n/10;

    printf("First number : %d\n",first);
    printf("Last number : %d\n",last);


    return 0;
}
