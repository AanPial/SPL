#include<stdio.h>
int call(int x,int y)
{
    int max;

    if(x>y)
    {
        max=x;
    }
    else
    {
        max=y;
    }
    return max;
}
int main()
{
    int a,b;

    printf("Enter two numbers : ");
    scanf("%d%d",&a,&b);

    int max=call(a,b);
    
    printf("\nMaximum is : %d\n",max);

    return 0;
}