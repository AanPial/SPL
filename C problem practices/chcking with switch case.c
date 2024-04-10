#include<stdio.h>
int main()
{
    int x;
    printf("Input Number : ");
    scanf("%d",&x);

    switch(x)
    {
    case 10:
        printf("x == 10");
        break;

    case 50:
        printf("x == 50");
        break;

    case 100:
        printf("x == 100");
        break;

    case 500:
        printf("x == 500");
        break;

    default:
        printf("The number is not equal to 10,50,100,500.");
    }

    return 0;
}
