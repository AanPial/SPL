#include<stdio.h>
int main()
{
    float p,t,r;
    float interest;

    printf("Enter principle: ");
    scanf("%f",&p);
    printf("Enter time: ");
    scanf("%f",&t);
    printf("Enter rate: ");
    scanf("%f",&r);

    interest=(p*t*r)/100;

    printf("Simple Interest = %f",1interest);

    return 0;
}
