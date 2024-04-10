#include<stdio.h>
int main()
{
    float a,b,c;

    printf("Enter base of the triangle: ");
    scanf("%f",&b);
    printf("Enter height of the triangle: ");
    scanf("%f",&c);

    a = (b * c) / 2;

    printf("Area of the triangle = %.2f sq. units",a);

    return 0;
}
