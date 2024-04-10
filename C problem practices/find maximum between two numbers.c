#include<stdio.h>
int main()
{
    float x,y;

    printf("Input num1:");
    scanf("%f",&x);
    printf("Input num2:");
    scanf("%f",&y);

    if(x>y)
    {
        printf("Maximum is: %f",x);
    }
    else if(x==y)
    {
        printf("Both are equal.");
    }
    else
    {
        printf("Maximum is: %f",y);
    }

    return 0;
}
