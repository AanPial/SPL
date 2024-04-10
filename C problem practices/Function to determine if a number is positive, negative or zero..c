#include<stdio.h>
int func(int x)
{
    if(x==0)
    {
        return 0;
    }
    else if(x<0)
    {
        return -1;
    }
    else
    {
        return 1;
    }
}
int main()
{
    int x;

    printf("Enter value : ");
    scanf("%d",&x);

    int check;
    check=func(x);

    if(check==0)
    {
        printf("Zero");
    }
    else if(check==-1)
    {
        printf("Negative");
    }
    else if(check==1)
    {
        printf("Positive");
    }

    return 0;

}
