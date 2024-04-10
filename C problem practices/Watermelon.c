#include<stdio.h>
int main()
{
    int w;

    printf("Enter the the weight of your watermelon:");
    scanf("%d",&w);

    if(w>=1 && w<=100)
    {
        if(w%2==0 && w!=2)
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }
    }

    return 0;

}

