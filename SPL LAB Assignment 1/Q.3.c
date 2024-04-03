//Ans: to the question no # (3)
//find the decimal of a binary number and count the number of '1'

#include<stdio.h>
#include<math.h>
int main()
{
    int n,temp,temp1,sum=0,i;
    int peg,count=0,bit,digit;

    printf("Enter the Binary number : ");
    scanf("%d",&n);

    temp=n;
    digit=log10(temp);

    for(i=0;i<=digit;i++)
    {
        peg=pow(2,i);
        bit=peg*(temp%10);
        sum=sum+bit;
        temp=temp/10;
    }
    temp1=n;
    for(i=0;i<=digit;i++)
    {
        if((temp1%10) && 1 == 1)
        {
            count++;
        }
        temp1=temp1/10;
    }
    printf("\n%d | %d\n",sum,count);

    return 0;
}
