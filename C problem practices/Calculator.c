#include<stdio.h>
int main()
{
    char operator;
    double x,y,result;

    printf("Enter an operator(+,-,*,/):");
    scanf("%c",&operator);

    printf("Enter two numbers:");
    scanf("%lf%lf",&x,&y);

    switch(operator)
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
        printf("Math Error");
    }
    printf("%.5lf",result);

    return 0;


}
