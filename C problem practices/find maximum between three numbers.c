#include<stdio.h>
int main()
{
    int x,y,z,max;

    printf("Input num1:");
    scanf("%d",&x);
    printf("Input num2:");
    scanf("%d",&y);
    printf("Input num3:");
    scanf("%d",&z);

    max=((x>y)&&(x>z))?x:(y>z)?y:z;

    printf("Maximu between %d,%d and %d is %d",x,y,z,max);

    return 0;
}
