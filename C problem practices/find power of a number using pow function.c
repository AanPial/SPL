#include<stdio.h>
int main()
{
    float p,b,e;

    printf("Enter base: ");
    scanf("%f",&b);
    printf("Enter exponent: ");
    scanf("%f",&e);

    p=pow(b,e);

    printf("%.3f^%.3f=%.3f",b,e,p);

    return 0;
}
