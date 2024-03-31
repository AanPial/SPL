#include<stdio.h>
int main()
{
    int num;

    printf("Enter number : ");
    scanf("%d",&num);

    if(num==0)
    {
        printf("This number is Zero.");
    }
    else if(num>0)
    {
        printf("This number is Positive.");
    }
    else
    {
        printf("This number is negetive.");
    }

    return 0;
}
