#include<stdio.h>
int main()
{
    float tempf,tempc;

    printf("Enter temperature in Farenheit : ");
    scanf("%f",&tempf);

    tempc=(tempf-32)*(5/9);

    printf("Celcius = %.2f",tempc);

    return 0;

}
