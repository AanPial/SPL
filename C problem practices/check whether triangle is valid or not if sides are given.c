#include<stdio.h>
int main()
{
    int a,b,c;

    printf("Enter three sides: ");
    scanf("%d %d %d",&a,&b,&c);

    if(a+b>c && a+c>b && b+c>a)
    {
        printf("This is a triangle.");
    }
    else
    {
        printf("This is not a triangle.");
    }
    return 0;
}
