#include<stdio.h>
int main()
{
    int n=10;
    int *p;
    p= &n;
    printf("Adress of p variable is : %d\n",p);
    printf("Value of p variable is : %d\n",*p);

    return 0;
}