#include<stdio.h>
int main()
{
    int count=0,n;

    printf("Input n: ");
    scanf("%d",&n);

    while(count<=n)
    {
        printf("%d\n",count);
        count++;
    }
}
