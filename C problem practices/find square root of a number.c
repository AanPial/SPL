#include<stdio.h>
int main()
{
    float x,y;

    printf("Enter any number: ");
    scanf("%f",&x);

    y=sqrt(x);

    printf("Square root of %.2f = %.2f",x,y);

    return 0;
}
