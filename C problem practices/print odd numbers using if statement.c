#include<stdio.h>
int main()
{
    int i,n;

    printf("Input n: ");
    scanf("%d",&n);

    printf("All odd numbers from 1 to n\n");

    for(i=1;i<=n;i++)
    {
        if(i%2!=0)
        {
            printf("%d\n",i);
        }
    }

    return 0;
}
