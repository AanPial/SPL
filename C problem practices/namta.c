#include<stdio.h>
int main()
{
    int n,i=1;

    printf("Enter the number for multiplication table :");
    scanf("%d",&n);

    do
    {
        printf("%d * %d = %d\n",n,i,i*n);
        i++;
    }
    while(i<=10);

    return 0;
}
