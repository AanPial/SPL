#include<stdio.h>
int main()
{
    int n,i,sum=0;

    printf("Enter the number of terms : ");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {

        if(i%2==0)
        {
            sum=sum-i;
            printf("-%d",i);
        }
        else
        {
            sum=sum+i;
            if(i>1)
            {
                printf("%+d",i);
            }
            else
            {
                printf("%d",i);
            }
        }

    }

    printf("=%d",sum);
}
