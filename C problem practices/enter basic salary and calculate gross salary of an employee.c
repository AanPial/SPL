#include<stdio.h>
int main()
{
    float bs,hra,da,gross;

    printf("Input basic salary of employee: ");
    scanf("%f",&bs);

    if(bs<=10000)
    {
        hra=bs*.2;
        da=bs*.8;
    }
    else if(bs>=10001 && bs<=20000)
    {
        hra=bs*.25;
        da=bs*.9;
    }
    else if(bs>=20001)
    {
        hra=bs*.3;
        da=bs*.95;
    }
    gross=bs+hra+da;

    printf("Gross salary = %.2f",gross);

    return 0;

}
