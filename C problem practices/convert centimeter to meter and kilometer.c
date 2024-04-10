#include<stdio.h>
int main()
{
    float c,m,km;

    printf("Enter length in centimeter = ");
    scanf("%f",&c);

    m=c/pow(10,2);
    km=c/pow(10,5);

    printf("Length in meter = %f meters\n",m);
    printf("Length in kilometer = %f kilometers",km);

    return 0;
}
