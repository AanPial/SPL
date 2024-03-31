#include<stdio.h>
#define MAX 1000
int main()
{
    int a,b;

    printf("Enter a : ");
    scanf("%d",&a);
    printf("Enter b : ");
    scanf("%d",&b);

    int temp;

    temp=a;
    a=b;
    b=temp;

    printf("a : %d\nb : %d",a,b);

    return 0;
}

