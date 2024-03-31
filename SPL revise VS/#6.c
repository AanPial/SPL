//calculate Compound Interest
#include<stdio.h>
int main()
{
    int amount,time;
    float ratio;

    float CI;

    printf("Enter amount : ");
    scanf("%d",&amount);
    printf("Enter Time : ");
    scanf("%d",&time);
    printf("Enter amount : ");
    scanf("%f",&ratio);

    CI=amount*pow((1+(ratio/100)),time);

    printf("CI=%.2f",CI);

    return 0;
}
