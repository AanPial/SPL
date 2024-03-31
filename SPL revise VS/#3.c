//diameter, circumference and area of a circle in C.
#include<stdio.h>
int main()
{
    float d,c,a;
    float r;
    printf("Enter radius: ");
    scanf("%f",&r);

    a=2.14*pow(r,2);
    d=2*r;
    c=2.14*2*r;

    printf("Diameter = %f\n",d);
    printf("Area = %f\n",a);
    printf("circumference = %f\n",c);

    return 0;
}
