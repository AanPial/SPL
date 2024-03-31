#include<stdio.h>
int main()
{
    int n;

    printf("Enter number : ");
    scanf("%d",&n);

    int count;

    for(count=0;n!=0;count++)
    {
        n=n/10;
    }

    printf("\nTotal digit=%d\n",count);

    return 0;
}
