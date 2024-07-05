#include<stdio.h>
int main()
{
    int n=10;
    printf("Value of num = %d\n",n);
    printf("Address of num = %d\n",&n);
    printf("value using pointer = %d\n",*(&n));
    return 0;
}