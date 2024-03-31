#include<stdio.h>
int main()
{
    int num;

    printf("Enter number : ");
    scanf("%d",&num);

    printf("\n");
    switch(num%2)
    {
    case 0:
        printf("Even number.");
        break;
    default:
        printf("Odd number.");
    }
    printf("\n");

    return 0;
}
