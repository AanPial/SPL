#include<stdio.h>
int main()
{
    int a,b,c;

    printf("Enter three sides :\n");

    scanf("%d%d%d",&a,&b,&c);

    if(a==b && b==c)
    {
        printf("It is equilateral.");
    }
    else if(a==b || b==c || a==c)
    {
        printf("It is isosceles.");
    }
    else
    {
        printf("It is scalene.");
    }

    return 0;
}
