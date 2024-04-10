#include<stdio.h>
#include<math.h>

int prime(int n)
{
    int prime=1,i;

    for(i=2;i<n;i++)
    {
        if(n%i==0)
        {
            prime=0;
            break;
        }
    }
    if(prime==1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int perfect(int n)
{
    int i,sum=0;

    for(i=1;i<n;i++)
    {
        if(n%i==0)
        {
            sum=sum+i;
        }
    }
    if(sum==n)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int armstrong(n)
{
    int i,sum,cube,temp;
    temp=n;
    for(sum=0;n!=0;n/=10)
    {
        cube=pow((n%10),3);
        sum+=cube;
    }
    if(sum==temp)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int num;

    printf("Enter Number : ");
    scanf("%d",&num);

    int pr,per,arm;

    pr=prime(num);

    if(pr==1)
    {
        printf("%d is prime number",num);
    }
    else
    {
        printf("%d is not a prime number",num);
    }

    printf("\n");
    per=perfect(num);

    if(per==1)
    {
        printf("\n%d is Perfect number\n",num);
    }
    else
    {
        printf("\n%d is not a Perfect number\n",num);
    }
    printf("\n");
    arm=armstrong(num);

    if(arm==1)
    {
        printf("\nArmstrong number\n");
    }
    else
    {
        printf("\nNot Armstrong Number.\n");
    }

    return 0;

}
