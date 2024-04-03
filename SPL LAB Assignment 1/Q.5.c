//Ans: to the question no # (5)
//question 5 - Number Pattern

#include<stdio.h>
int main()
{
    int row,col,n;
    int cc=1;
    int x=1,state=1;

    printf("Enter row : ");
    scanf("%d",&n);

    for(row=1;row<=n;row++)
    {
        for(col=1;col<=cc;col++)
        {
            if(state==1)
            {
                printf("%d",x);
            x++;
            if(x>n)
            {
                x=x-2;
                state=0;
            }
            }
            else
            {
                printf("%d",x);
            x--;
            if(x<1)
            {
                x=x+2;
                state=1;
            }
            }
        }
        if(row<=n/2)
        {
            cc++;
        }
        else
        {
            cc--;
        }
        for(col=1;col<=n/2+1-row;col++)
        {
            printf("$");
        }
        printf("\n");
    }

    return 0;


}
