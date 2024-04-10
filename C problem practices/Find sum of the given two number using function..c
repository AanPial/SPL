#include<stdio.h>

int add(num1,num2);
int main()
{
    int sum,n1,n2;

    printf("Enter two numbers : \n");
    scanf("%d%d",&n1,&n2);

    sum=add(n1,n2);

    printf("Sum is : %d",sum);

    return 0;
}

int add(num1,num2)
{
    int s=num1+num2;

    return s;
}
