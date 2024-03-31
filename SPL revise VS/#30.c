#include<stdio.h>
int main()
{
    float i,n,m;
    float sum=0;

    printf("Enter n : ");
    scanf("%f",&n);

    for(i=1;i<=n;i++)
    {
        scanf("%f",&m);
        sum=sum+m;
    }
    printf("\nsum=%.3f\n",sum);

    float avg=sum/n;

    printf("Average = %.3f\n",avg);

    return 0;
}
