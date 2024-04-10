#include<stdio.h>
int main()
{
    int x,y;

    printf("Enter two numbers to find maximum number: ");
    scanf("%d %d",&x,&y);

    switch(x>y)
    {
    case 1:
        printf("%d is Maximum number.",x);
        break;

    case 0:
        printf("%d is Maximum number.",y);


    }

    return 0;
}
