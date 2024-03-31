//all arithmatic Operations
#include<stdio.h>
int main()
{
    int a,b;
    float sum,sub,qout,prod;
    int mod;

    printf("Enter two numbers : ");
    scanf("%d%d",&a,&b);

    sum=a+b;
    sub=a-b;
    qout=a/b;
    prod=a*b;
    mod=a%b;

    printf("Result-1 : %.2f\n",sum);
    printf("Result-2 : %.2f\n",sub);
    printf("Result-3 : %.2f\n",qout);
    printf("Result-4 : %.2f\n",prod);
    printf("Result-5 : %d\n",mod);

    return 0;
}
