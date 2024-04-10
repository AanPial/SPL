#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c;
    float root1,root2,imaginary;
    float discriminant;

    printf("Enter value of a,b,c quardatic equation(ax^2+bx+c):\n ");
    scanf("%f%f%f",&a,&b,&c);

    discriminant=pow(b,2)-(4*a*c);

    if(discriminant>0)
    {
        root1=(-b+sqrt(discriminant))/(2*a);
        root2=(-b-sqrt(discriminant))/(2*a);

        printf("Tow distinct and real roots exists: %.2f and %.2f",root1,root2);
    }
    else if(discriminant==0)
    {
        root1=root2=-b/(2*a);
        printf("Tow same and real roots exists: %.2f and %.2f",root1,root2);
    }
    else if(discriminant<0)
    {
        root1=root2=-b/(2*a);
        imaginary=sqrt(-discriminant)/(2*a);
        printf("Tow distinct and complex roots exists: %.2f + i%.2f and %.2f - i%.2f",root1,imaginary,root2,imaginary);
    }

    return 0;
}
