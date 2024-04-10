#include<stdio.h>
int main()
{
    int mark;

    printf("Enter your mark : ");
    scanf("%d",&mark);

    if(mark>85 && mark<=100)
    {
        printf("congrats! you scored grade A ...");
    }
    else if(mark>60 && mark<=85)
    {
        printf("You scored grade B+ ...");
    }
    else if(mark>40 && mark<=60)
    {
        printf("You scored grade B ...");
    }
    else if(mark>32 && mark<=40)
    {
        printf("You scored grade C ...");
    }
    else
    {
        printf("Sorry you are fail ...");
    }

    return 0;
}
