#include<stdio.h>
int main()
{
    int i,n;

    printf("Enter n : ");
    scanf("%d",&n);

    int temp;

    for(i=1;i<=10;i++)
    {
        temp=n*i;
        printf("%d*%d=%d\n",n,i,temp);
        temp=n;
    }

    return 0;
}
