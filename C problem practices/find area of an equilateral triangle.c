#include<stdio.h>
int main()
{
    float a,x;

    printf("Enter side of the equilateral triangle: ");
    scanf("%f",&a);

    x=(sqrt(3)/4)*pow(a,2);

    printf("Area of equilateral triangle = %.2f sq. units",x);

    return 0;
}
