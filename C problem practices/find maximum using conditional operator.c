#include<stdio.h>
int main()
{
    int num1,num2,max;

    printf("Enter number 1:");
    scanf("%d",&num1);
    printf("Enter number 2:");
    scanf("%d",&num2);

    max=(num1>num2)?num1:num2;

    printf("The maximum between %d and %d is %d",num1,num2,max);

    return 0;
}
