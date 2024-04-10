#include<stdio.h>
int main()
{
    int n,i;
    float x,sum=0;

    printf("Enter n : ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        scanf("%f",&x);
        sum+=x;
    }
    printf("Sum = %.2f\n",sum);

    float avg;
    avg=sum/n;

    printf("Average : %.2f",avg);

    return 0;

}
