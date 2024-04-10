#include<stdio.h>
#include<math.h>
int main()
{
    int n,m,temp,sum=0,cube,count=0;
    int i;

    printf("Enter the numbers :\n");
    scanf("%d %d",&n,&m);

    for(i=n+1;i<m;i++)
    {
    temp=i;
    for(sum=0;temp>0;temp/=10)
    {
        cube=pow(temp%10,3);
        sum=sum+cube;
    }

    if(sum==i)
    {
        printf("%d ",sum);
        count++;
    }
    sum=0;
    temp=0;
    }
    printf("\nThere are %d armstrong number.",count);

    return 0;
}

