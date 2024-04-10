#include<stdio.h>
float pin(float base,float expo)
{
    if(expo == 0)
    {
        return 1;
    }
    else if (expo > 0)
    {
        return pow(base,expo);
    }
    else
    {
        return 1/pow(base,-expo);
    }
}

int main()
{
    float base,expo,pow,power;

    printf("Enter base : ");
    scanf("%f",&base);
    printf("Enter expo : ");
    scanf("%f",&expo);

    power=pin(base,expo);

    printf("Power = %.2f",power);

    return 0;
}
