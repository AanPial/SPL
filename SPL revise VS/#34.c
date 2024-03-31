#include<stdio.h>
int main()
{
    int n;
    printf("Enter number : ");
    scanf("%d",&n);

    int last,first,digit,dev,num,temp;

    last=n%10;
    digit=log10(n);
    dev=pow(10,digit);
    first=n/dev;
    num=n%dev;
    num=num/10;
    temp=(last*dev)+num*10+first;

    printf("Swapped = %d\n",temp);

    return 0;
}


