#include<stdio.h>
int main()
{
    int num,count=0,i;

    printf("Enter your number:");
    scanf("%d",&num);

    const int intsize=sizeof(int)*8;

    for(i=0;i<intsize;i++)
    {
        if((num>>i)&1)
            {
                break;
            }
            count++;
    }
    printf("railing zeros: %d",count);

    return 0;
}
