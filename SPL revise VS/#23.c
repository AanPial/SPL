#include<stdio.h>
int main()
{
    float n1,n2,result;
    char ch;

    printf("Enter : ");
    scanf("%f",&n1);
    scanf("%c",&ch);
    scanf("%f",&n2);

    printf("\n");
    switch(ch)
    {
    case '+':
        result=n1+n2;
        printf("Result = %.4f",result);
        break;
    case '-':
        result=n1-n2;
        printf("Result = %.4f",result);
        break;
    case '*':
        result=n1*n2;
        printf("Result = %.4f",result);
        break;
    case '/':
        result=n1/n2;
        printf("Result = %.4f",result);
        break;
    default:
        printf("Error.");
    }
    printf("\n");

    return 0;
}
