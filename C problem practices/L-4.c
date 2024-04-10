#include<stdio.h>
#include<math.h>
int main()
{
    int x,y,n;

    printf("Enter lim1 : ");
    scanf("%d",&x);
    printf("Enter lim2 : ");
    scanf("%d",&y);


    while(x!=y)
    {
        if(x<y)
        {
            n=pow(x,2);
            printf("%d ",n);
            x++;
        }
        else if(x>y)
        {
            n=pow(x,2);
            printf("%d ",n);
            x--;
        }
    }
    if(x==y)
    {
        printf(" Reached\n");
    }

    return 0;
}
