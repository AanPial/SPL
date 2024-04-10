#include<stdio.h>
int main()
{
    int t1=0,t2=1,t3;
    int n,i;
    int sum=1;

    printf("Enter n : ");
    scanf("%d",&n);
    printf("%d+",t1);
    printf("%d",t2);
    for(i=1;i<n;i++)
    {
        t3=t1+t2;
        printf("%+d",t3);
        sum=sum+t3;
        t1=t2;
        t2=t3;
    }
    printf("=%d\n",sum);

    return 0;
}
