#include<stdio.h>

int main()
{
    int a,MSB;
    printf("Input Number:");
    scanf("%d",&a);

    const int BITS=sizeof(int)*8;

    MSB=1<<(BITS-1);

    if(MSB & a)
    {
        printf("Most Significant Bit (MSB) of %d is set (1).",a);
    }
    else
    {
        printf("Most Significant Bit (MSB) of %d is set (0).",a);
    }

    return 0;
}

