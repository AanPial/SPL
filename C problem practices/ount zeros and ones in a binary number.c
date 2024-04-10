#include<stdio.h>
int main()
{
    int num,count=0,i,totz;

    printf("Enter Input:");
    scanf("%d",&num);

    const int intsize=sizeof(int)*8;

    for(i=0;i<=intsize;i++)
    {
        if((num>>i)&1)
        {
            count++;
        }

    }
    printf("total number of 1 is : %d",count);

    totz=intsize-count;

    printf("\nTotal number of 0 : %d",totz);

    return 0;
}

