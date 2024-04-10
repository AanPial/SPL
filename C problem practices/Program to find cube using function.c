#include<stdio.h>

int cube(int a)
{
    int r;
    r=a*a*a;
    return r;
}

int main()
{
    int x,c;

    printf("Enter any number : ");
    scanf("%d",&x);

    c=cube(x);

    printf("\nCube = %d\n",c);

    return 0;
}
