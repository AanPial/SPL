#include<stdio.h>
int main()
{
    float r,d,c,a;
    float pi=3.1416;

    printf("Enter radius :");
    scanf("%f",&r);

    d=2*r;
    printf("Diameter = %f units\n",d);

    c=2*pi*r;
    printf("Circumference = %f units\n",c);

    a=pi*pow(r,2);
    printf("Area = %f units\n",a);

    return 0;
}
