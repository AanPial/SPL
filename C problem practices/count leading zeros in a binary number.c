#include<stdio.h>
int main()
{
    int num,count=0,i,msb;
    printf("Enter Input:");
    scanf("%d",&num);

    const int intsize=sizeof(int)*8;

    msb=1<<(intsize-1);

    for(i=0; i<intsize; i++)
    {
        if((num<<i)&msb)
        {
            break;
        }
        count++;
    }

    printf("Total number of leading zeros in %d is %d", num, count);
    return 0;

}
