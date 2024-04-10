#include<stdio.h>
int main()
{
    int i,sum=0;
    int marks[5];

    printf("Enter marks :\n");
    for(i=0;i<5;i++)
    {
        scanf("%d",&marks[i]);
    }

    printf("Total marks : ");
    for(i=0;i<5;i++)
    {
        printf("+%d",marks[i]);
        sum=sum+marks[i];
    }
    printf("\nTotal marks = %d\n",sum);

    float avg;
    avg=sum/5;

    printf("Average : %.3f",avg);

    return 0;
}

