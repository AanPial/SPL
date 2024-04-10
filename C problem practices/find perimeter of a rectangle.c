#include<stdio.h>
int main()
{
    float l,w,perimeter;

    printf("Enter length :");
    scanf("%f",&l);
    printf("Enter width :");
    scanf("%f",&w);

    perimeter=2*(l+w);

    printf("Perimeter of rectangle = %f units",perimeter);

    return 0;
}
