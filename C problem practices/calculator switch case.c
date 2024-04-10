#include<stdio.h>
int main()
{
    char op;
    float x,y;

    printf("Enter an operator(+,-,*,/):");
    scanf("%c",&op);
    printf("Enter two operands: ");
    scanf("%f %f",&x,&y);

    switch(op)
    {
    case '+':
        printf("result = %f",x+y);
        break;

    case '-':
        printf("result = %f",x-y);
        break;

    case '*':
        printf("result = %f",x*y);
        break;

    case '/':
        printf("result = %f",x/y);
        break;

        default:
        ("Math error.");
    }
    return 0;
}
