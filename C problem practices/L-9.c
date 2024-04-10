#include<stdio.h>
int main()
{
    int n,i;

    printf("Enter n : ");
    scanf("%d",&n);

    int t1=0,t2=1,t3;

    printf("0 1 ");
    for(i=1;i<n;i++)
    {
        t3=t1+t2;
        printf("%d ",t3);
        t1=t2;
        t2=t3;
    }

    return 0;
}
