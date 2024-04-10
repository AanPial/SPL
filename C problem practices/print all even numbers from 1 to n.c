#include<stdio.h>
int main()
{
    int i,n;

    printf("Enter n:");
    scanf("%d",&n);

    printf("All even numbers from 1 to %d are: \n", n);


    for(i=2;i<=n;i+=2)
    {
        printf("\n%d",i);
    }
    return 0;
}
