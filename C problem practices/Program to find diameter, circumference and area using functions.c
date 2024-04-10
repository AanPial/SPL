#include<stdio.h>
#include<math.h>
#define pi 3.1416

float diameter(float x)
{
    float dd;
    dd=2*x;

    return dd;
}
float circ(float y)
{
    float cc;
    cc=2*pi*y;
    return cc;
}
float area(float z)
{
    float zz;
    zz=pi*z*z;
    return zz;
}
int main()
{
    float r;
    float d,c,a;
    printf("Enter radius : ");
    scanf("%f",&r);

    d=diameter(r);
    c=circ(r);
    a=area(r);

    printf("diameter = %.2f\n",d);
    printf("Circumstances = %.2f\n",c);
    printf("Area = %.2f\n",a);

    return 0;
}
