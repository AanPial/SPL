//convert days to yy,ww,dd
#include<stdio.h>
int main()
{
    int days;

    printf("Enter Days : ");
    scanf("%d",&days);

    int y,w,d;

    y=days/365;
    w=(days-365*y)/7;
    d=days-(365*y+w*7);

    printf("Year-%d,Week-%d,Days-%d",y,w,d);

    return 0;
}
