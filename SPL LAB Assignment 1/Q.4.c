//Ans: to the question no# (4)
//Dementor Numbers between two ranges

#include<stdio.h>
#include<math.h>
int main()
{
    int temp,first,last,digit,dev;
    int temp1,rev;
    int temp2,sum,square;
    int i,n,m;

    printf("Enter the two ranges : \n");
    scanf("%d%d",&n,&m);

    printf("\n");
    for(i=n;i<=m;i++)
    {
    //finding first and last digit
    temp=i;

    digit=log10(temp);
    dev=pow(10,digit);

    last=temp%10;
    first=temp/dev;

    //finding palindrom

    temp1=i;

    for(rev=0;temp1!=0;temp1/=10)
    {
        rev=rev*10;
        rev=rev+(temp1%10);
    }

    //finding Square of the sum of the digits

    temp2=i;

    for(sum=0;temp2!=0;temp2/=10)
    {
        sum=sum+(temp2%10);
    }

    square=pow(sum,2);

    if((first==1 && last==1) && rev!=i && square%8==0)
    {
        printf("%d ",i);
    }

     rev==0;
     sum==0;
     first=0;
     last=0;
     square=0;

    }
    printf("\n");

    return 0;
}
