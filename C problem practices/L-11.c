#include<stdio.h>
int main()
{
    int x,y;
    printf("Enter x : ");
    scanf("%d",&x);
    printf("Enter y : ");
    scanf("%d",&y);

    int i,pow=1;
    for(i=1;i<=y;i++)
    {
        pow=pow*x;
    }

    printf("\nx^y = %d\n",pow);

    return 0;
}
