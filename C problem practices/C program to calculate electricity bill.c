#include<stdio.h>
int main()
{
    float unit,bill,surcharge,totalbill;

    printf("Input electricity unit charge : ");
    scanf("%f",&unit);

    if(unit<=50)
    {
        bill=unit*.50;
    }
    else if(unit<=150)
    {
        bill=(50*.50)+((unit-50)*.75);
    }
    else if(unit<=250)
    {
        bill=(50*.5)+(100*.75)+((unit-(50+100))*1.20);
    }
    else
    {
       bill=(50*.5)+(100*.75)+(100*1.2)+((unit-(50+100+100))*1.50);
    }

    surcharge=bill*.20;
    totalbill=bill+surcharge;

    printf("Elctricity Bill = %.2f",totalbill);

    return 0;
}
