#include<stdio.h>
int pow(int a,int b)
{
    if(a==1)
    {
        return 1;
    }
    if(a%b!=0 || a==0)
    {
        return 0;
    }
    return pow( a/b,b );
}
int main()
{
    int x,n;

    printf("Enter num : ");
    scanf("%d",&x);
    printf("Enter base: ");
    scanf("%d",&n);

    int po=pow(x,n);

    if(po==1)
    {
        printf("%d is power of %d",x,n);
    }
    else
    {
        printf("%d is not power of %d",x,n);
    }

}
