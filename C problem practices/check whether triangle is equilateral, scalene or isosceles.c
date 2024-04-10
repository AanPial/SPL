#include<stdio.h>
int main()
{
    int a,b,c;

    printf("Enter the tree sides of the triangle:\n");
    scanf("%d %d %d",&a,&b,&c);

    if(a==b && b==c)
    {
        printf("The triangle is  equilateral.");
    }
    else if(a==b || a==c ||b==c)
    {
        printf("The triangle is  isosceles .");
    }
    else
    {
        printf("The triangle is Scalene.");
    }

    return 0;

}
