#include<stdio.h>
int main()
{
    int n,i;
    float sum=0;

    printf("Enter the number of terms : ");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        if(i%2==0)
        {
            sum=sum-(1/(float)i);
            printf("-(1/%d)",i);
        }
        else
        {
            sum=sum+(1/(float)i);
            if(i<2)
            {
                printf("1");
            }
            else
            {
                printf("+(1/%d)",i);
            }
        }
    }
    printf("=%f",sum);
}
