#include<stdio.h>
int main()
{
    int taka;
    int temp;
    printf("Enter the amount of Taka : ");
    scanf("%d",&taka);
    if(taka>=1000)
    {
        temp=taka/1000;
        printf("1000 : %d\n",temp);
        taka=taka-temp*1000;
    }
    if(taka>=500)
    {
        temp=taka/500;
        printf("500 : %d\n",temp);
        taka=taka-temp*500;
    }
    if(taka>=100)
    {
        temp=taka/100;
        printf("100 : %d\n",temp);
        taka=taka-temp*100;
    }
    if(taka>=50)
    {
        temp=taka/50;
        printf("50 : %d\n",temp);
        taka=taka-temp*50;
    }
    if(taka>=20)
    {
        temp=taka/20;
        printf("20 : %d\n",temp);
        taka=taka-temp*20;
    }
    if(taka>=10)
    {
        temp=taka/10;
        printf("10 : %d\n",temp);
        taka=taka-temp*10;
    }
    if(taka>=5)
    {
        temp=taka/5;
        printf("5 : %d\n",temp);
        taka=taka-temp*5;
    }
    if(taka>=2)
    {
        temp=taka/2;
        printf("2 : %d\n",temp);
        taka=taka-temp*2;
    }
    if(taka>=1)
    {
        temp=taka/1;
        printf("1 : %d\n",temp);
        taka=taka-temp*1;
    }

    return 0;
}
