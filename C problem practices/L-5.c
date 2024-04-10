#include<stdio.h>
int main()
{
    int x,y,n,i;

    printf("Enter PL-1 : ");
    scanf("%d",&x);
    printf("Enter the try limit : ");
    scanf("%d",&y);

    for(i=1;i<=y;i++)
    {
        scanf("%d",&n);
        if(n==x)
        {
            printf("Right player 2 wins!\n");
        }
        else
        {
            printf("Wrong,%d choice left\n",y-i);
            if(y-i == 0)
            {
                printf("\n\nPlayer 2 lost\n");
            }
        }
    }

    return 0;
}
