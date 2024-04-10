#include<stdio.h>
int main()
{
    float base,result;

    printf("Enter base : ");
    scanf("%f",&base);
    printf("Enter result : ");
    scanf("%f",&result);

    float power;

    power=log(result)/log(base);

    printf("%.2f",power);

    return 0;
}
