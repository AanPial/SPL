#include<stdio.h>
int main()
{
    float cp,sp,pr,lo;

    printf("Input Cost Price: ");
    scanf("%f",&cp);
    printf("Input Selling price: ");
    scanf("%f",&sp);

    if(sp>cp)
    {
        pr=sp-cp;
        printf("Profit: %.2f",pr);
    }
    else if(cp>sp)
    {
        lo=cp-sp;
        printf("Loss: %.2f",lo);
    }
    else
    {
        printf("No profit,no loss.");
    }

    return 0;
}
