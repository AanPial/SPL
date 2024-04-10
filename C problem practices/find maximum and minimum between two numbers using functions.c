#include<stdio.h>

int mx(int x,int y)
{
    int max;
    if(x>y)
    {
      max=x;
    }
    else
    {
       max=y;
    }

    return max;
}
int mn(int x,int y)
{
    int min;
    if(x<y)
    {
      min=x;
    }
    else
    {
       min=y;
    }

    return min;
}
int main()
{
    int x,y;
    int max,min;

    printf("Enter two integer : \n");
    scanf("%d%d",&x,&y);

    max=mx(x,y);
    min=mn(x,y);

    printf("\nMaximum = %d\n",max);
    printf("\nMinimum = %d\n",min);

    return 0;

}
