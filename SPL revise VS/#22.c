#include<stdio.h>
int main()
{
    int num;

    printf("Enter number : ");
    scanf("%d",&num);

    printf("\n");
    switch(num>0)
    {
    case 1:
        printf("Positive.");
        break;
    case 0:
        switch(num<0)
        {
        case 1:
            printf("Negative.");
            break;
        default:
            printf("Zero.");
        }
    }
    printf("\n");

    return 0;
}

