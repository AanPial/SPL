#include<stdio.h>
int main()
{
    int n,m,rev,temp,count=0,i;

    printf("Enter Number : ");
    scanf("%d%d",&n,&m);

    for(i=n;i<=m;i++)
    {
            temp=i;

    for(rev=0;temp>0;temp/=10)
    {
        rev=rev*10;
        rev=rev+(temp%10);
    }
    if(rev==i)
    {
        printf("%d\n",i);
        count++;
    }

    }
    printf("\nThere are %d Palindrom numbers.\n\n",count);
}

