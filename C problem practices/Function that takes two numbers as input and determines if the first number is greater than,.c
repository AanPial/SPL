#include<stdio.h>
int func(int x,int y)
{
    if(x>y)
    {
        return 1;
    }
    else
    {
        return -1;
    }
}

int main()
{
    int x,y;

    printf("Enter two numbers : ");
    scanf("%d%d",&x,&y);

    int great=func(x,y);

    if(great==1)
    {
        printf("%d is greater ",x);
    }
    else
    {
        printf("%d is greater ",y);
        return 0;
    }

}
