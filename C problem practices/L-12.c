#include<stdio.h>
int main()
{
    int x,y;

    printf("Enter x : ");
    scanf("%d",&x);
    printf("Enter y : ");
    scanf("%d",&y);

    int i,gcd,lcm,min;
    if(x<y)
    {
        min=x;
    }
    else
    {
        min=y;
    }

    for(i=1;i<=min;i++)
    {
        if(x%i==0 && y%i==0)
        {
            gcd=i;
        }
    }
    printf("\nGCD = %d\n",gcd);

    lcm=(x*y)/gcd;

    printf("\nLCM = %d\n",lcm);

    return 0;
}

