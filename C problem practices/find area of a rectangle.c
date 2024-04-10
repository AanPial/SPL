#include<stdio.h>
void main()
{
    float l,b,area;

    printf("Enter Length :");
    scanf("%f",&l);
    printf("Enter Breadth :");
    scanf("%f",&b);

    area=l*b;

    printf("Area of rectangle= %f sq.units",area);

    return 0;
}
