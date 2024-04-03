//Ans: to the question no # (1)

//Find pixie numbers

#include<stdio.h>
#include<math.h>
int main()
{
    int num,digit,dev,temp1,temp2;
    int first,last,sum;
    int i,sum2=0;

    printf("Enter number : ");
    scanf("%d",&num);

    //finding first and last digit of a number
    temp1=num;

    digit=log10(temp1);
    dev=pow(10,digit);

    first=temp1/dev;
    last=temp1%10;

    //sum of first and last digits
    sum=first+last;

    //finding sum of factors of a number
    temp2=num;
    for(i=1;i<=temp2;i++)
    {
        if(temp2%i==0)
        {
            sum2=sum2+i;
        }
    }

    if(sum<7 && sum2<2*num)
    {
        printf("\nPixie\n");
    }
    else
    {
        printf("\nNot Pixie\n");
    }

    return 0;

}
