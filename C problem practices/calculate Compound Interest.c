#include<stdio.h>
int main()
{
    float p,t,r;
    float ci;

    printf("Enter principle (amount): ");
    scanf("%f",&p);
    printf("Enter time: ");
    scanf("%f",&t);
    printf("Enter rate: ");
    scanf("%f",&r);

    ci=p*pow((1+(r/100)),t);

    printf("Compound Interest = %.2f",ci);

    return 0;
}
