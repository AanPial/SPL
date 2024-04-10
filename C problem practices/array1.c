#include<stdio.h>
int main()
{
    int marks[5];
    int i,sum=0;
    float avg;

    printf("Enter the number of your five subjects : ");

    for(i=0;i<5;i++)
    {
        scanf("%d",&marks[i]);
    }

    for(i=0;i<5;i++)
    {
        sum=sum+marks[i];
    }

    printf("Total Number : %d\n",sum);

    avg=(float)sum/5;

    printf("Average number : %f",avg);

    return 0;


}
