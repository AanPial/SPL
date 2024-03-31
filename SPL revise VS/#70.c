#include<stdio.h>
int main()
{
    int n,i,rev=0,temp;

    printf("Enter number : ");
    scanf("%d",&n);
    temp=n;

    while(temp!=0)
    {
        rev=rev*10+(temp%10);
        temp=temp/10;
    }
    printf("\nReverse = %d\n",rev);

    int sumeven=0,sumodd=0;

    while(rev!=0)
    {
        if((rev%10)%2==0)
        {
            sumeven=sumeven+(rev%10);
        }
        else
        {
            sumodd=sumodd+(rev%10);
        }
        rev=rev/10;
    }

    printf("Sum of even positioned digits = %d\n",sumeven);
    printf("Sum of Odd positioned digits = %d\n",sumodd);

    return 0;

}
