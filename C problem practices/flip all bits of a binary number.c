#include<stdio.h>
int main()
{
    int num,flippednum;

    printf("Enter a number:");
    scanf("%d",&num);

    flippednum=~(num);

    printf("Number after bits are flipped: %d (in decimal)",flippednum);

    return 0;
}
