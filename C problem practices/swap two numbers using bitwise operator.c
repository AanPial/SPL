#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter Numbers:");
    scanf("%d",&a);
    scanf("%d",&b);

    a=a^b;
    b=b^a;
    a=a^b;

    printf("After swapping:\n");

    printf("%d",a);
    printf("\n%d",b);

    return 0;
}
