//calculator with function

#include<stdio.h>

int plus(int *x,int *y)
{
    return *x+*y;
}
int min(int *x,int *y)
{
   return *x-*y;
}
int prod(int *x,int *y)
{
   return *x * *y;
}
int vag(int *x,int *y)
{
   return *x / *y;
}
int main()
{
    int x,y;
    char op;
    int sub,sum,div,mul;

    printf("Enter two integers : ");
    scanf("%d%d",&x,&y);
    printf("Enter operators : ");
    scanf(" %c",&op);

    if(op=='+')
    {
       sum=plus(&x,&y);
       printf("Sum = %d",sum);
    }
    else if(op=='-')
    {
       sub=min(&x,&y);
       printf("Subtract = %d",sub);
    }
    else if(op=='*')
    {
       mul=prod(&x,&y);
       printf("Product = %d",mul);
    }
    else
    {
       div=vag(&x,&y);
       printf("Division = %d",div);
    }
    return 0;
}
