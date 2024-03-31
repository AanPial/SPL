#include<stdio.h>
int main()
{
    int n,i,temp;

    printf("Enter a Number : ");
    scanf("%d",&n);
    int rev=0,count=0;

    while(n!=0)
    {
        rev=rev*10+(n%10);
        n=n/10;
    }

    printf("\nRev : %d\n\n",rev);
    int evsum=0,oddsum=0;
    temp=rev;
    while(temp!=0)
    {
        count++;
        temp/=10;
    }
    for(i=1;i<=count;i++)
    {
        if(i%2==0)
        {
            evsum=evsum+(rev%10);
        }
        else
        {
            oddsum=oddsum+(rev%10);
        }
        rev/=10;
    }
    printf("Count = %d\n",count);
    printf("Even sum = %d\n",evsum);
    printf("Odd sum = %d\n",oddsum);

    return 0;
}