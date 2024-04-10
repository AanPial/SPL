#include<stdio.h>

int func(int x)
{
    int sum=0,i,num;
    printf("Enter number : \n");
    for(i=0;i<x;i++)
        {
            scanf("%d",&num);
            sum+=num;
        }
        printf("Sum In Function: %d",sum);
        return sum;
}
int main()
{
    int n;

    printf("Enter the number of values to sum: ");
    scanf("%d",&n);

    int sum=func(n);

    printf("\nSum In main Function: %d\n",sum);

    return 0;
}
