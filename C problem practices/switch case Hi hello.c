#include<stdio.h>
int main()
{
    int x,y;

    printf("Enter number:");
    scanf("%d%d",&x,&y);

    switch(x>y && x+y>0)
    {
    case 1:
        printf("Hi.");
        break;

    case 0:
        printf("bye");
        break;

    default:
        printf("hello.");
    }
    return 0;
}
