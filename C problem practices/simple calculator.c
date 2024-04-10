#include<stdio.h>
int main()
{
    char operation;
    float x,y,result;

    printf("Enter Operator(+,-,*,/):");
    scanf("%c",&operation);

    printf("Enter two numbers:");
    scanf("%f %f",&x,&y);

    switch(operation)
    {
    case '+':
        result=x+y;
        break;

    case '-':
        result=x-y;
        break;

    case '*':
        result=x*y;
        break;

    case '/':
        result=x/y;
        break;

    default:
        printf("Math Error.");

    }

    printf("%f %c %f = %.3f",x,operation,y,result);

    return 0;
}
