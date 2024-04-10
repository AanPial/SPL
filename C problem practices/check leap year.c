#include<stdio.h>
int main()
{
    int year;

    printf("Input year:");
    scanf("%d",&year);

    if((year%4==0) && (year%100!=0))
    {
        printf("The year is Leap year.");
    }
    else if(year%400==0)
    {
        printf("The year is Leap year.");
    }
    else
    {
        printf("The year is not Leap year");
    }

    return 0;
}
